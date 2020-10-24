#ifndef SOURCELISTWIDGET_H
#define SOURCELISTWIDGET_H

#include "base_list_widget.h"

class SourceListWidget : public BaseListWidget
{
    Q_OBJECT
public:
    SourceListWidget(QWidget *parent = nullptr);

    void dragMoveEvent(QDragMoveEvent *e);
};

#endif // SOURCELISTWIDGET_H
