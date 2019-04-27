/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the penguin class
*******************************************************************************/


#include "Penguin.h"



Penguin::Penguin()
{
	
	this->cost = 1000;
	this->numOfBabies = 5;
	this->baseFoodCost = 10;
	this->payoff = 0.1;
}

//Finds the food cost for the penguins
double Penguin::penguinFoodCost()
{
	double base = getBaseFoodCost();

	return base;
}


Penguin::~Penguin()
{
}
