#pragma once
#include "ui_toDo_element.h"
#include <QtWidgets>
#include "customWidget.h"


class element : public QWidget
{
	Q_OBJECT

public:
	element(QWidget* parent=nullptr,int id=0);
	friend class toDoList;
	~element();
	void setId(int i) { id = i; };

//signals:

private slots:
	void test();

	//void actionQuit(); // connect triggered to actionquit  which calls a function that is a signals
	// then in parent connect the signal to the function
	// each problems can be solved with an additional indirection
	// https://forum.qt.io/topic/83780/how-to-add-one-parameter-to-the-clicked-signal/10 


private:
	Ui::Form ui;
	int id;
	void createToolButton();

	QMenu* menu;
	intAction* action_quit;

};


