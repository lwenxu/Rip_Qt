#include "Rip.h"
#include <QApplication>
#include <iostream>
#include <vector>
#include "Router.h"
#include "framelesswindow.h"
#include "DarkStyle.h"



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	a.setStyle(new DarkStyle);
	FramelessWindow framelessWindow;
	MainWindow *mainWindow = new MainWindow;
	framelessWindow.setContent(mainWindow);
	framelessWindow.show();
	//MainWindow w;

	//w.show();
	return a.exec();
}