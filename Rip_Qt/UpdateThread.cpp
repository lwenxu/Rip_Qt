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
	movie = new QMovie(":/Rip/images/ss.gif");
	qRegisterMetaType<pair<string, int>>("pair<string, int>");
}

UpdateThread::~UpdateThread()
{
	delete movie;
}

void UpdateThread::run()
{
	for (int i = 0; i < routers.size(); ++i) {
		emit addLightSignal(i,movie);
		//routers.at(i)->sendInfoToNeighbor(movie);
		int j = 0;
		for (auto dv : routers.at(i)->getDV()) {
			emit addItemSignal(i,j,dv);
			++j;
			sleep(1);
		}
	}
}


