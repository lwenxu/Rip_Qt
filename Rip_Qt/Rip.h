#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include "Router.h"
#include "UpdateThread.h"

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	void initRouters(vector<Router *> &routers);
	void releaseRouters(vector<Router *> &routers);
	void initCloumn();
	private slots:
	void on_pushButton_2_clicked();
	void startThread();
	void addItemSlot(int i, int j, pair<string, int> dv);
	void updateItemSlot(int, int, pair<string, int>);
	

private:
	Ui::MainWindow *ui;
	vector<Router*> routers;
	vector<QTableWidget*> tables;
	UpdateThread* thread;
	void initTable(QStringList header);

	private slots:
	void addLightSlot(Router* router, QMovie* movie);
	void removeLightSlot(Router* router);
	void updateLogsSlot();

};
void watchCurrent(vector<Router*> &routers);
#endif // MAINWINDOW_H
