#pragma once

#include <QWidget>
#include "ui_calculator_view.h"

class CalculatorView : public QWidget
{
	Q_OBJECT

public:
	CalculatorView(QWidget *parent = Q_NULLPTR);
	~CalculatorView();

private:
	Ui::CalculatorView ui;
};
