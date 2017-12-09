#include "UpdateThread.h"
#include <windows.h>

//UpdateThread::UpdateThread(vector<Router*>& routers,vector<QTableWidget*>& tables��QWidget* parent=0):QThread()
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

		//����ط�Ӧ�ð� router ����ķ���д��������  Ҳ���ǰѸ��²�����������  Ȼ���ź���� ��Ҫ��һ��ɾ������Ӻ��̵�Ч��

		//==========================================
	int i = 0;
		for (auto router:routers)
		{
			emit addLightSignal(router,movie);

			for (Router* neighbor : router->m_Neighbor) {
				
				emit addLightSignal(neighbor, movie);

				for (auto dv : router->m_DV) {
					auto index = (neighbor->m_DV).find(dv.first);
					//����ñ�����ھ����
					//TODO::����һ���޴�Ŀӣ�Ҳ���ǵ������ж�һ��Ԫ���Ƿ���ڵ�ʱ�����Ҫ��==end�����ǲ����ڣ��϶���׼
					if (index == neighbor->m_DV.end()) {
						neighbor->m_DV.insert(make_pair(dv.first, dv.second + 1));
						//TODO::���Խ����޸ı���Ĳ���
					}
					else {//�������
						  //���·���̾����
						if (index->second > dv.second - 1) {
							neighbor->m_DV.insert(make_pair(index->first, index->second + 1));
							//TODO::���Խ����޸ı���Ĳ���
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


