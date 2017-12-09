#include "ui_Rip.h"
#include "Rip.h"
#include <QTableWidgetItem>
#include <QStringList>
#include <QSize>
#include <QPainter>
#include <windows.h>
#include "UpdateThread.h"
#include <QPixmap>
#include <QMovie>
#include <QDebug>
#include "QObject"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent), ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	QStringList header;
	header << "des" << "vec";
	initTable(header);
	initRouters(routers);
	this->thread = new UpdateThread(routers,tables,nullptr);
	//connect(thread, SIGNAL(UpdateSignal()), this, SLOT(UpdateSlot()));
	////connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(startThread()));
	//connect(ui->pushButton, SIGNAL(clicked()), thread, SLOT(UpdateSlot()));

	//绑定按钮的点击操作到开启一个线程
	connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(startThread()));
	//绑定多线程的激活添加方法 到当前真真的添加item的代码
	connect(thread, SIGNAL(addItemSignal(int, int, pair<string, int>)), this, SLOT(addItemSlot(int, int, pair<string, int>)));
	//绑定添加灯的方法
	connect(thread, SIGNAL(addLightSignal(Router*, QMovie*)), this, SLOT(addLightSlot(Router*, QMovie*)));
	//绑定删除灯的方法
	connect(thread, SIGNAL(removeLightSignal(Router*)), this, SLOT(removeLightSlot(Router*)));


	


}

//************************************
// Method:    ~MainWindow
// FullName:  MainWindow::~MainWindow
// Access:    public 
// Returns:   
// Qualifier:
//************************************
MainWindow::~MainWindow()
{
	delete ui;
	releaseRouters(routers);
}

void MainWindow::initRouters(vector<Router*>& routers) {
	auto * router1 = new Router("router1");
	auto * router2 = new Router("router2");
	auto * router3 = new Router("router3");
	auto * router4 = new Router("router4");
	auto * router5 = new Router("router5");
	auto * router6 = new Router("router6");
	auto * router7 = new Router("router7");
	auto * router8 = new Router("router8");
	auto * router9 = new Router("router9");
	//neighbor init
	router1->addNeighbor(router2);
	router1->addNeighbor(router3);
	router2->addNeighbor(router1);
	router2->addNeighbor(router4);
	router2->addNeighbor(router5);
	router3->addNeighbor(router1);
	router3->addNeighbor(router4);
	router3->addNeighbor(router6);
	router3->addNeighbor(router7);
	router4->addNeighbor(router2);
	router4->addNeighbor(router3);
	router4->addNeighbor(router5);
	router4->addNeighbor(router6);
	router5->addNeighbor(router2);
	router5->addNeighbor(router4);
	router5->addNeighbor(router6);
	router5->addNeighbor(router9);
	router6->addNeighbor(router3);
	router6->addNeighbor(router4);
	router6->addNeighbor(router5);
	router6->addNeighbor(router8);
	router7->addNeighbor(router3);
	router7->addNeighbor(router8);
	router8->addNeighbor(router6);
	router8->addNeighbor(router7);
	router8->addNeighbor(router9);
	router9->addNeighbor(router5);
	router9->addNeighbor(router8);
	//DV init
	router1->initDV();
	router2->initDV();
	router3->initDV();
	router4->initDV();
	router5->initDV();
	router6->initDV();
	router7->initDV();
	router8->initDV();
	router9->initDV();
	//lable init
	router1->initLable(ui->label_17);
	router2->initLable(ui->label_25);
	router3->initLable(ui->label_18);
	router4->initLable(ui->label_20);
	router5->initLable(ui->label_21);
	router6->initLable(ui->label_19);
	router7->initLable(ui->label_22);
	router8->initLable(ui->label_23);
	router9->initLable(ui->label_24);

	//table grid init
	//router1->

	routers.push_back(router1);
	routers.push_back(router2);
	routers.push_back(router3);
	routers.push_back(router4);
	routers.push_back(router5);
	routers.push_back(router6);
	routers.push_back(router7);
	routers.push_back(router8);
	routers.push_back(router9);
}

void watchCurrent(vector<Router*> &routers) {
	for (Router *router : routers) {
		//        router->printCurrentNeighbor();
		//        cout<<"ss"<<endl;
		router->printCurrentDV();
	}
}

void MainWindow::releaseRouters(vector<Router*> &routers) {
	for (auto router : routers) {
		delete router;
	}
}

void MainWindow::on_pushButton_2_clicked()
{
	for (auto it1 = tables.begin(); it1 != tables.end(); ++it1) {
		(*it1)->clear();
	}
	for (auto it2 = routers.begin(); it2 != routers.end(); ++it2) {
		(*it2)->m_DV.clear();
		(*it2)->initDV();
	}
}

void MainWindow::startThread() {
	thread->start();
}

void MainWindow::addItemSlot(int i,int j,pair<string,int> dv)
{
	tables.at(i)->setItem(j, 0, new QTableWidgetItem(dv.first.c_str()));
	char vec[2];
	itoa(dv.second, vec, 10);
	tables.at(i)->setItem(j, 1, new QTableWidgetItem(vec));
}

void MainWindow::initTable(QStringList header)
{
	ui->tableWidget_2->setColumnCount(2);
	ui->tableWidget_2->setRowCount(8);
	ui->tableWidget_2->setHorizontalHeaderLabels(header);
	

	tables.push_back(ui->tableWidget_2);

	ui->tableWidget_3->setColumnCount(2);
	ui->tableWidget_3->setRowCount(8);
	ui->tableWidget_3->setHorizontalHeaderLabels(header);
	tables.push_back(ui->tableWidget_3);

	ui->tableWidget_4->setColumnCount(2);
	ui->tableWidget_4->setRowCount(8);
	ui->tableWidget_4->setHorizontalHeaderLabels(header);
	tables.push_back(ui->tableWidget_4);

	ui->tableWidget_5->setColumnCount(2);
	ui->tableWidget_5->setRowCount(8);
	ui->tableWidget_5->setHorizontalHeaderLabels(header);
	tables.push_back(ui->tableWidget_5);

	ui->tableWidget_6->setColumnCount(2);
	ui->tableWidget_6->setRowCount(8);
	ui->tableWidget_6->setHorizontalHeaderLabels(header);
	tables.push_back(ui->tableWidget_6);

	ui->tableWidget_7->setColumnCount(2);
	ui->tableWidget_7->setRowCount(8);
	ui->tableWidget_7->setHorizontalHeaderLabels(header);
	tables.push_back(ui->tableWidget_7);

	ui->tableWidget_8->setColumnCount(2);
	ui->tableWidget_8->setRowCount(8);
	ui->tableWidget_8->setHorizontalHeaderLabels(header);
	tables.push_back(ui->tableWidget_8);

	ui->tableWidget_9->setColumnCount(2);
	ui->tableWidget_9->setRowCount(8);
	ui->tableWidget_9->setHorizontalHeaderLabels(header);
	tables.push_back(ui->tableWidget_9);

	ui->tableWidget_10->setColumnCount(2);
	ui->tableWidget_10->setRowCount(8);
	ui->tableWidget_10->setHorizontalHeaderLabels(header);
	tables.push_back(ui->tableWidget_10);
}

void MainWindow::addLightSlot(Router* router, QMovie* movie)
{
	router->setLable(movie);
	movie->start();
}

void MainWindow::removeLightSlot(Router* router)
{
	router->setLable(new QMovie);
}

void MainWindow::UpdateSlot()
{

}
