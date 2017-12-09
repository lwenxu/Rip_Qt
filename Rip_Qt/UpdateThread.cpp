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
	for (int i = 0; i < routers.size(); ++i) {
		//����ط�Ӧ�ð� router ����ķ���д��������  Ҳ���ǰѸ��²�����������  Ȼ���ź���� ��Ҫ��һ��ɾ������Ӻ��̵�Ч��

		//==========================================

		this->setLable(movie);
		for (Router* router : m_Neighbor) {
			router->setLable(movie);
			for (auto dv : m_DV) {
				auto index = (router->m_DV).find(dv.first);
				//����ñ�����ھ����
				//TODO::����һ���޴�Ŀӣ�Ҳ���ǵ������ж�һ��Ԫ���Ƿ���ڵ�ʱ�����Ҫ��==end�����ǲ����ڣ��϶���׼
				if (index == router->m_DV.end()) {
					router->m_DV.insert(make_pair(dv.first, dv.second + 1));

				}
				else {//�������
					  //���·���̾����
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


