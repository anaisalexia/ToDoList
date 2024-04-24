#pragma
#include "element.h"
#include "customWidget.h"


element::element(QWidget* parent, int i) : QWidget(parent),id(i)
{
    ui.setupUi(this);
    createToolButton();
    ui.button_parameter->setStyleSheet("QToolButton::menu-indicator{image: none;}");
 
    
}
element::~element() {
    delete menu;
    delete action_quit;
}

void element::test() {
    
}

void element::createToolButton() {

    // Creation of the Menu
    menu = new QMenu(this);

    action_quit = new intAction(QString::fromStdString("remove"), this,id);
    connect(action_quit, SIGNAL(triggered(bool)), action_quit, SLOT(handleTriggered(bool)));

    menu->addAction(action_quit);

    menu->setStyleSheet("QMenu {background-color: rgb(255, 255, 255);} QMenu::item:selected {color: rgb(250, 20, 40)}");



    ui.button_parameter->setMenu(menu);
    ui.button_parameter->setPopupMode(QToolButton::InstantPopup);


}
