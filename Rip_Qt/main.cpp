#include "Rip.h"
#include <QApplication>
#include <iostream>
#include <vector>
#include "Router.h"
#include "framelesswindow.h"
#include "DarkStyle.h"
#include <QFile>

QByteArray readTextFile(const QString &file_path) {
	QFile input_file(file_path);
	QByteArray input_data;

	if (input_file.open(QIODevice::Text | QIODevice::Unbuffered | QIODevice::ReadOnly)) {
		input_data = input_file.readAll();
		input_file.close();
		return input_data;
	}
	else {
		return QByteArray();
	}
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//QString style_sheet = readTextFile(":/stylesheets/material-blue.qss");
	//a.setStyleSheet(style_sheet);

	a.setStyle(new DarkStyle);
	//FramelessWindow framelessWindow;
	//MainWindow *mainWindow = new MainWindow;
	//framelessWindow.setContent(mainWindow);
	//framelessWindow.show();





	MainWindow w;

	w.show();
	return a.exec();
}