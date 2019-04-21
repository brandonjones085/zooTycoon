#include "Animal.h"
#include <iostream>



Animal::Animal()
{
	this->age = 1; 
	this->cost = 0; 
	this->numOfBabies = 0; 
	this->baseFoodCost = 0; 
	this->payoff = 0; 
	

}

Animal::Animal(int a, int c, int nOB, int bFC, int p, int mib)
{
	this->age = a;
	this->cost = c;
	this->numOfBabies = nOB;
	this->baseFoodCost = bFC;
	this->payoff = p;
}
	

void Animal::setAge(int age)
{
	this->age = age; 
}

int Animal::getAge()
{
	return age; 
}

void Animal::setCost(int cost)
{
	this->cost = cost; 
}

int Animal::getCost()
{
	return cost; 
}

void Animal::setNumOfBabies(int babies)
{
	this->numOfBabies = babies; 
}

int Animal::getNumOfBabies()
{
	return numOfBabies; 
}

void Animal::setPayoff(int payoff)
{
	this->payoff = payoff; 
}

double Animal::getPayoff()
{
	return payoff; 
}

//Asks user what they would like to enter for the base food cost
void Animal::setBaseFoodCost()
{
	std::cout << "What would you like the base food cost to be? "; 
	std::cin >> baseFoodCost; 
}

int Animal::getBaseFoodCost()
{
	return baseFoodCost; 
}



void Animal::isAdult(int a)
{
	if (a < 3)
	{

	}
}

Animal::~Animal()
{
}
