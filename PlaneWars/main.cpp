#include "planewars.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QApplication::addLibraryPath(". / plugins");
	PlaneWars w;
	w.show();
	return a.exec();
}
