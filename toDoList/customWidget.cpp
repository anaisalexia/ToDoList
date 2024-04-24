#pragma
#include "customWidget.h"


intAction::intAction(const QString& text, QObject* parent, int id) : QAction(text, parent), id(id) {

};

void intAction::handleTriggered(bool checked) {
	emit triggeredInt(checked, id);
	qDebug("quiiiiiit");

}

//void intAction::triggeredInt(bool checked, int id) {
//}
