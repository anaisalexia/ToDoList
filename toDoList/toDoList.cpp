#include "toDoList.h"
#include "element.h"
#include "customWidget.h"
#include <QDebug>

toDoList::toDoList(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    element_list = new element*[5];
    nb = 0;
    connect(ui.button_add, SIGNAL(clicked()), this, SLOT(addElement()));
}

toDoList::~toDoList()
{}

void toDoList::addElement() {

    element_list[nb] = new element(this,nb);
    ui.scroll_layout->addWidget(element_list[nb]); 

    connect(element_list[nb]->action_quit, SIGNAL(triggeredInt(bool, int)), this, SLOT(removeElement(bool, int)));

    nb++;

}

void toDoList::removeElement(bool checked,int id) {
    qDebug("removeed");
    qDebug() << id;
    delete element_list[id];
    element_list[id] = element_list[nb - 1];
    element_list[id]->setId(id);
    element_list[nb - 1] = nullptr;
    nb--;
}