#ifndef DESTINATIONLISTWIDGET_H
#define DESTINATIONLISTWIDGET_H

#include <QMimeData>
#include <QDropEvent>

#include "base_list_widget.h"

class DestinationListWidget : public BaseListWidget
{
    Q_OBJECT
public:
    DestinationListWidget(QWidget *parent = nullptr);
    void dropEvent(QDropEvent *event);
};

#endif // DESTINATIONLISTWIDGET_H
