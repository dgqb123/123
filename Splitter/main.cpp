#include "splitter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFont font("ZYSong18030", 12);
	a.setFont(font);

	Splitter w;
	w.show();
	return a.exec();
}
