#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_pretty_advanced_calculator.h"

class PrettyAdvancedCalculator : public QMainWindow
{
	Q_OBJECT

public:
	PrettyAdvancedCalculator(QWidget *parent = Q_NULLPTR);

private:
	Ui::prettyAdvancedCalculatorClass ui;
};
