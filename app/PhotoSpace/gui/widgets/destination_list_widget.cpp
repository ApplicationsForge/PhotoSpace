#include "destination_list_widget.h"

DestinationListWidget::DestinationListWidget(QWidget *parent) :
    BaseListWidget(parent)
{

}

void DestinationListWidget::dropEvent(QDropEvent *event)
{
    const QMimeData *mimeData = event->mimeData();
    QByteArray encoded = mimeData->data("application/x-qabstractitemmodeldatalist");
    QDataStream stream(&encoded, QIODevice::ReadOnly);

    QMap<int,  QVariant> roleDataMap;
    while (!stream.atEnd())
    {
        int row, col;
        stream >> row >> col >> roleDataMap;
    }

    QString text = roleDataMap.first().toString();
    auto currentItemAtTargetPos = this->itemAt(event->pos());
    (currentItemAtTargetPos != nullptr)
        ? this->insertItem(this->row(currentItemAtTargetPos), text)
        : this->addItem(text);
    event->acceptProposedAction();
}
