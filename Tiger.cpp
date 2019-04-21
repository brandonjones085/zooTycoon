#include "Tiger.h"


Tiger::Tiger()
{
	this->age = 1; 
	this->cost = 10000; 
	this->numOfBabies = 1; 
	this->baseFoodCost = 10; 
	this->payoff = 0.2; 
}

void Tiger::subtractTigerCost()
{
	moneyInBank -= cost; 
}





Tiger::~Tiger()
{
}
