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

		//这个地方应该把 router 里面的方法写到这里来  也就是把更新操作放在这里  然后信号与槽 主要起一个删除和添加红绿灯效果

		//==========================================
	int i = 0;
		for (auto router:routers)
		{
			emit addLightSignal(router,movie);

			for (Router* neighbor : router->m_Neighbor) {
				
				emit addLightSignal(neighbor, movie);

				for (auto dv : router->m_DV) {
					auto index = (neighbor->m_DV).find(dv.first);
					//如果该表项不存在就添加
					//TODO::这有一个巨大的坑，也就是当我们判断一个元素是否存在的时候必须要用==end而不是不等于，肯定不准
					if (index == neighbor->m_DV.end()) {
						neighbor->m_DV.insert(make_pair(dv.first, dv.second + 1));
						//TODO::可以进行修改表项的操作
					}
					else {//表项存在
						  //如果路径短就添加
						if (index->second > dv.second - 1) {
							neighbor->m_DV.insert(make_pair(index->first, index->second + 1));
							//TODO::可以进行修改表项的操作
						}
					}
				}

				//int j = 0;
				//for (auto dv : routers.at(i)->getDV()) {
				//	emit addItemSignal(i, j, dv);
				//	++j;
				//}
				//++i;

				sleep(1);
				emit removeLightSignal(neighbor);

			}
			auto index = router->m_DV.find(router->m_Name);
			if (index == router->m_DV.end()) {

			}
			else {
				router->m_DV.erase(index);
			}
			
			emit removeLightSignal(router);
		}





}


