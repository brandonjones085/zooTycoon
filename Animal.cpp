/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the animal class
*******************************************************************************/

#include "Animal.h"
#include <iostream>


//Constructor
Animal::Animal()
{
	this->age = 1; 
	this->cost = 0; 
	this->numOfBabies = 0; 
	this->baseFoodCost = 0; 
	this->payoff = 0; 
	
}

//Sets animal age
void Animal::setAge(int age)
{
	this->age = age; 
}

//Returns animal age
int Animal::getAge()
{
	return age; 
}

//Sets the cost for the animal
void Animal::setCost(int cost)
{
	this->cost = cost; 
}

//Returns the cost
int Animal::getCost()
{
	return cost; 
}

//sets the number of babies animal
void Animal::setNumOfBabies(int babies)
{
	this->numOfBabies = babies; 
}

int Animal::getNumOfBabies()
{
	return numOfBabies; 
}

//Sets the payoff for animal
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

	validateBase(baseFoodCost); 
}

double Animal::getBaseFoodCost()
{
	return baseFoodCost; 
}


//Validation for base food cost
void Animal::validateBase(int &i)
{
	while (!std::cin || (i < 1 && i > 200))
	{
		std::cin.clear();
		std::cin.sync();
		//std::cin.ignore();
		std::cout << "\nInvalid input! Try again: ";
		std::cin >> i;
	}
}


Animal::~Animal()
{
}
