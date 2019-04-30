#include "pretty_advanced_calculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	prettyAdvancedCalculator w;
	w.show();
	return a.exec();
}
