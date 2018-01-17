#ifndef CALCULATORENGINE_H
#define CALCULATORENGINE_H

#include "CommonHeader.h"
#include "Utility.h"
class CalculationEngine
{
public:
	CalculationEngine();
	~CalculationEngine();

	void Calculate();
private:
	Utility *m_pUtility;
};

#endif