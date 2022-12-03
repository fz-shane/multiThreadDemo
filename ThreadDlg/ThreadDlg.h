//#pragma once
//
//#include <QtWidgets/QDialog>
//#include "ui_ThreadDlg.h"
//
//class ThreadDlg : public QDialog
//{
//    Q_OBJECT
//
//public:
//    ThreadDlg(QWidget *parent = nullptr);
//    ~ThreadDlg();
//
//private:
//    Ui::ThreadDlgClass ui;
//};

#pragma once
#include <QDialog>
#include <QPushButton>

#include "workthread.h"
#define MAXSIZE 1 //MAXSIZE宏定义了线程的数目
//#define MAXSIZE 5 //MAXSIZE宏定义了线程的数目

class ThreadDlg : public QDialog
{
	Q_OBJECT
public:
	ThreadDlg(QWidget* parent = 0);
	~ThreadDlg();

private:
	QPushButton* startBtn;//btn 按钮
	QPushButton* stopBtn;
	QPushButton* quitBtn;

public slots:
	void slotStart(); //槽函数用于启动线程
	void slotStop(); //槽函数用于终止线程

private:
	WorkThread* workThread[MAXSIZE]; //(a)

};
