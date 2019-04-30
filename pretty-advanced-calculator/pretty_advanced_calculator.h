#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_pretty_advanced_calculator.h"

class prettyAdvancedCalculator : public QMainWindow
{
	Q_OBJECT

public:
	prettyAdvancedCalculator(QWidget *parent = Q_NULLPTR);

private:
	Ui::prettyAdvancedCalculatorClass ui;
};
