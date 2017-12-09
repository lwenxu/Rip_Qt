#include "UpdateThread.h"
#include <windows.h>

//UpdateThread::UpdateThread(vector<Router*>& routers,vector<QTableWidget*>& tables，QWidget* parent=0):QThread()
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
		//这个地方应该把 router 里面的方法写到这里来  也就是把更新操作放在这里  然后信号与槽 主要起一个删除和添加红绿灯效果

		//==========================================

		this->setLable(movie);
		for (Router* router : m_Neighbor) {
			router->setLable(movie);
			for (auto dv : m_DV) {
				auto index = (router->m_DV).find(dv.first);
				//如果该表项不存在就添加
				//TODO::这有一个巨大的坑，也就是当我们判断一个元素是否存在的时候必须要用==end而不是不等于，肯定不准
				if (index == router->m_DV.end()) {
					router->m_DV.insert(make_pair(dv.first, dv.second + 1));

				}
				else {//表项存在
					  //如果路径短就添加
					if (index->second > dv.second - 1) {
						router->m_DV.insert(make_pair(index->first, index->second + 1));

					}
				}
			}
			movie->start();
			router->removeLable();
		}
		auto index = m_DV.find(this->m_Name);
		if (index == m_DV.end()) {

		}
		else {
			m_DV.erase(index);
		}
		this->removeLable();




		//=================================


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


