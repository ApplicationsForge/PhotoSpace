#include "base_list_widget.h"

BaseListWidget::BaseListWidget(QWidget *parent) :
    QListWidget(parent)
{
}


void BaseListWidget::keyPressEvent(QKeyEvent *keyEvent)
{
    QModelIndex selectedItemIndex = this->currentIndex();
    int keyPressed = keyEvent->key();

    switch (keyPressed) {
    case Qt::Key_Up:
    {
        this->keyUpPressed(selectedItemIndex);
        break;
    }
    case Qt::Key_Down:
    {
        this->keyDownPressed(selectedItemIndex);
        break;
    }
    default:
    {
        break;
    }
    }
}

void BaseListWidget::keyUpPressed(QModelIndex selectedItemIndex)
{
    int currentItemRow = selectedItemIndex.row();
    int rowsCount = this->count();
    if(currentItemRow > 0)
    {
        this->setCurrentRow(currentItemRow - 1);
    }
    else
    {
        if(currentItemRow == 0)
        {
            this->setCurrentRow(rowsCount - 1);
        }
        else
        {
            this->setCurrentRow(0);
        }
    }
}

void BaseListWidget::keyDownPressed(QModelIndex selectedItemIndex)
{
    int currentItemRow = selectedItemIndex.row();
    int rowsCount = this->count();
    if(currentItemRow >= 0)
    {
        if(currentItemRow == rowsCount - 1)
        {
            this->setCurrentRow(0);
        }
        else
        {
            this->setCurrentRow(currentItemRow + 1);
        }
    }
    else
    {
        this->setCurrentRow(rowsCount - 1);
    }
}
