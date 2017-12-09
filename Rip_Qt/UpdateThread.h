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
using namespace std;


class UpdateThread : public QThread
{
	Q_OBJECT
public:
	UpdateThread(vector<Router*> routers, vector<QTableWidget*> tables,QWidget * parent);
protected:
    void run();

private:
     vector<Router*> routers;
     vector<QTableWidget*> tables;

signals:
	 void UpdateSignal();
signals:
	 void addItemSignal();

public slots:
     void UpdateSlot();
};

#endif // UPDATETHREAD_H
