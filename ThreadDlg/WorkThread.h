//#pragma once
//
//#include <QThread>
//
//class WorkThread  : public QThread
//{
//	Q_OBJECT
//
//public:
//	WorkThread(QObject *parent);
//	~WorkThread();
//};

#pragma once
#include <QThread>
#include<iostream>
using namespace std;
class WorkThread : public QThread
{
	Q_OBJECT
public:
	WorkThread();
protected:
	void run();
};