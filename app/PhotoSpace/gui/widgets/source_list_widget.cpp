#include "source_list_widget.h"

SourceListWidget::SourceListWidget(QWidget *parent) :
    BaseListWidget(parent)
{

}

void SourceListWidget::dragMoveEvent(QDragMoveEvent *e)
{
    if (e->source() != this) {
        e->accept();
    } else {
        e->ignore();
    }
}
