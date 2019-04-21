#include "Penguin.h"



Penguin::Penguin()
{
	
	this->cost = 1000;
	this->numOfBabies = 5;
	this->baseFoodCost = 10;
	this->payoff = 0.1;
}


double Penguin::penguinFoodCost()
{
	double base = getBaseFoodCost();

	return base;
}


Penguin::~Penguin()
{
}
