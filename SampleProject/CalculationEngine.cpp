#include "CalculationEngine.h"

CalculationEngine::CalculationEngine()
{
	cout<<"Inside CalculationEngine constructor"<<endl;
	m_pUtility = new Utility();
}

CalculationEngine::~CalculationEngine()
{

}



void CalculationEngine::Calculate()
{
	cout<<"Inside Calculate method"<<endl;
	cout<<m_pUtility->getSum(10, 12)<<endl;


}



