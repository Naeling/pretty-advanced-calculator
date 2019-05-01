#include "pretty_advanced_calculator.h"
#include "calculator_view.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PrettyAdvancedCalculator advancedCalculator;
	CalculatorView calculatorView(&advancedCalculator);
	
	advancedCalculator.show();
	calculatorView.show();
	
	return a.exec();
}
