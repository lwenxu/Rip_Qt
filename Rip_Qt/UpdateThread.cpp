#include "UpdateThread.h"
#include <windows.h>

//UpdateThread::UpdateThread(vector<Router*>& routers,vector<QTableWidget*>& tables£¬QWidget* parent=0):QThread()
//{
//    this->routers=routers;
//    this->tables=tables;
//}

UpdateThread::UpdateThread(vector<Router*> routers, vector<QTableWidget*> tables, QWidget * parent)
{
	this->routers = routers;
	this->tables=tables;
}

void UpdateThread::run()
{

    emit UpdateSignal();

}

void UpdateThread::UpdateSlot()
{
	qDebug("asdfasfsf");
	QMovie *movie = new QMovie(":/Rip/images/ss.gif");

	for (int i = 0; i < routers.size(); ++i) {
		routers.at(i)->sendInfoToNeighbor(movie);
		int j = 0;
		for (auto dv : routers.at(i)->getDV()) {
			tables.at(i)->setItem(j, 0, new QTableWidgetItem(dv.first.c_str()));
			char vec[2];
			itoa(dv.second, vec, 10);
			tables.at(i)->setItem(j, 1, new QTableWidgetItem(vec));
			++j;
		}
		sleep(1);
	}
	delete movie;
}
