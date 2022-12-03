//#include "ThreadDlg.h"
//
//ThreadDlg::ThreadDlg(QWidget *parent)
//    : QDialog(parent)
//{
//    ui.setupUi(this);
//}
//
//ThreadDlg::~ThreadDlg()
//{}
#pragma execution_character_set("utf-8")
#include "threaddlg.h"
#include <QHBoxLayout>
#include<String>

ThreadDlg::ThreadDlg(QWidget* parent)
	: QDialog(parent)
{
	setWindowTitle(tr("thread"));
	startBtn = new QPushButton(tr("begin"));
	stopBtn = new QPushButton(tr("stop"));
	quitBtn = new QPushButton(tr("exit"));

	QHBoxLayout* mainLayout = new QHBoxLayout(this);

	mainLayout->addWidget(startBtn);
	mainLayout->addWidget(stopBtn);
	mainLayout->addWidget(quitBtn);

	connect(startBtn, SIGNAL(clicked()), this, SLOT(slotStart()));
	connect(stopBtn, SIGNAL(clicked()), this, SLOT(slotStop()));
	connect(quitBtn, SIGNAL(clicked()), this, SLOT(close()));
}
void ThreadDlg::slotStart()
{
	for (int i = 0; i < MAXSIZE; i++)
	{
		workThread[i] = new WorkThread(); //(a)
	}
	for (int i = 0; i < MAXSIZE; i++)
	{
		workThread[i]->start(); //(b)
	}
	startBtn->setEnabled(false);
	stopBtn->setEnabled(true);

}
void ThreadDlg::slotStop()
{
	for (int i = 0; i < MAXSIZE; i++)
	{
		workThread[i]->terminate();
		workThread[i]->wait();
	}

	startBtn->setEnabled(true);
	stopBtn->setEnabled(false);
}
ThreadDlg::~ThreadDlg() {
	for (int i = 0; i < MAXSIZE; i++)
	{
		delete workThread[i];
	}
}