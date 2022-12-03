#include "ThreadDlg.h"
#include <QtWidgets/QApplication>
#pragma execution_character_set("utf-8")

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	ThreadDlg w;
	//w.setWindowState(Qt::WindowMaximized);
	w.show();
	return a.exec();
}
