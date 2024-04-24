#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_toDoList.h"
#include "element.h"


class toDoList : public QMainWindow
{
    Q_OBJECT

public:
    toDoList(QWidget *parent = nullptr);
    ~toDoList();

private slots:
    void addElement();
    void removeElement(bool checked,int nb);




private:
    Ui::toDoListClass ui;
    element **element_list;
    size_t nb;
};
