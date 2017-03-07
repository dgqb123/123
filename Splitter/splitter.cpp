#include "splitter.h"
#include <QSplitter>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QListWidget>
Splitter::Splitter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QSplitter *baseSpliter = new QSplitter(Qt::Horizontal, 0);
	baseSpliter->setChildrenCollapsible(false);
	QTextEdit *textLeft = new QTextEdit(QObject::tr("left"), baseSpliter);
	textLeft->setAlignment(Qt::AlignCenter);
	baseSpliter->addWidget(textLeft);
	//init();
}

Splitter::~Splitter()
{

}

void Splitter::init()
{
	
	
	


	

	
}

