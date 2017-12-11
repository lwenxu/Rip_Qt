#ifndef UPDATETHREAD_H
#define UPDATETHREAD_H
#include <QThread>
#include <vector>
#include "Router.h"
#include <QTableWidget>
#include <QtGui>  
#include <QtCore>
#include <qwidget.h>
#include <windows.h>
#include <QMetaType>
#include <qdebug.h>
#include <QString>
using namespace std;


class UpdateThread : public QThread
{
	Q_OBJECT
public:
	UpdateThread(vector<Router*> routers, vector<QTableWidget*> tables,QWidget * parent);
	~UpdateThread();
protected:
    void run();

private:
     vector<Router*> routers;
     vector<QTableWidget*> tables;
	 QMovie *movie;


signals:
	 void addItemSignal(int i, int j, pair<string, int> dv);
 signals:
	 void updateItemSignal(int i, int j, pair<string, int> dv);
 signals:
	 void addLightSignal(Router* router, QMovie* movie);
 signals:
	 void removeLightSignal(Router* router);
 signals:
	 void updateNeighborTextSignal(const QString& name);
 signals:
	 void updateCurrentTextSignal(const QString& name);
 signals:
	 void updateLogsSignal();

};

#endif // UPDATETHREAD_H
