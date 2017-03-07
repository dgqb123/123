#ifndef SPLITTER_H
#define SPLITTER_H

#include <QtWidgets/QMainWindow>
#include "ui_splitter.h"

class Splitter : public QMainWindow
{
	Q_OBJECT

public:
	Splitter(QWidget *parent = 0);
	~Splitter();
	void init();

private:
	Ui::SplitterClass ui;
};

#endif // SPLITTER_H
