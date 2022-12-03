//#include "WorkThread.h"
//
//WorkThread::WorkThread(QObject *parent)
//	: QThread(parent)
//{}
//
//WorkThread::~WorkThread()
//{}
#include "workthread.h"
#include <QtDebug>

WorkThread::WorkThread()
{

}
void WorkThread::run()
{
	while (true)
	{
		for (int n = 0; n < 10; n++)
			qDebug() << n << n << n << n << n << n << n << n << endl;
	}
	//MAXSIZE = 1：单线程，每次都用同一线程打印；结果如下：

	//0 0 0 0 0 0 0 0

	//1 1 1 1 1 1 1 1

	//2 2 2 2 2 2 2 2

	//3 3 3 3 3 3 3 3

	//4 4 4 4 4 4 4 4

	//5 5 5 5 5 5 5 5

	//6 6 6 6 6 6 6 6

	//7 7 7 7 7 7 7 7

	//8 8 8 8 8 8 8 8

	//9 9 9 9 9 9 9 9

	//MAXSIZE = 5：多线程，每次打印用不同的线程，每个线程里面 n 都有各自的取值，结果如下：

	//2 2 2 2 2 2 2 2

	//3 3 3 3 3 3 3 3

	//4 4 4 4 4 4 4 4

	//5 5 5 5 5 5 5 5

	//6 6 6 6 6 6 6 6

	//7 7 7 7 7 7 7 7

	//8 8 8 8 8 8 8 8

	//9 9 9 9 9 9 9 9

	//0 0 0 0 0 0 0 0

}