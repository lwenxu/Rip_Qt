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
	 void addLightSignal(Router* router, QMovie* movie);
 signals:
	 void removeLightSignal(Router* router);

};

#endif // UPDATETHREAD_H
