#pragma once
#include <QDebug>
#include <QtWidgets>
#include <QAction>
#include <QObject>

class intAction : public QAction {

	Q_OBJECT
	// obliger pour connecter les slots + ne pas oublier de mettre les arguments des slots quand ils sont écrit dans connect

public:
	intAction(const QString& text, QObject* parent=nullptr, int id=0);
	~intAction() = default;

signals:
	void triggeredInt(bool check,int id );

public slots:
	void handleTriggered(bool checked); 


private:
	int id;

};
