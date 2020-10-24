#ifndef BASE_LIST_WIDGET_H
#define BASE_LIST_WIDGET_H

#include <QListWidget>
#include <QKeyEvent>
#include <QDebug>

class BaseListWidget : public QListWidget
{
    Q_OBJECT
public:
    BaseListWidget(QWidget *parent = nullptr);

    void keyPressEvent(QKeyEvent *keyEvent);
protected:
    void keyUpPressed(QModelIndex selectedItemIndex);
    void keyDownPressed(QModelIndex selectedItemIndex);
};

#endif // BASE_LIST_WIDGET_H
