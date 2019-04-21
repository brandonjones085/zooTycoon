#include "Turtle.h"



Turtle::Turtle()
{
	this->age = 1; 
	this->cost = 100;
	this->numOfBabies = 10;
	this->baseFoodCost = 10;
	this->payoff = 0.05;
}



double Turtle::turtleFoodCost()
{
	int base = getBaseFoodCost();

	return base * 0.5;
}


Turtle::~Turtle()
{
}
