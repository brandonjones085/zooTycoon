#include "Tiger.h"


Tiger::Tiger()
{
	this->cost = 10000; 
	this->numOfBabies = 1; 
	 
	this->payoff = 0.2; 
}

double Tiger::tigerBaseFoodCost()
{
	double base = getBaseFoodCost(); 

	return base * 5; 
}








Tiger::~Tiger()
{
}
