/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the header file for the animal class
*******************************************************************************/

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#pragma once
class Animal
{

protected: 
	
	int age; 
	int cost; 
	int numOfBabies; 
	int baseFoodCost; 
	double payoff; 


public:
	Animal();
	
	void setAge(int); 
	int getAge(); 
	void setCost(int);
	int getCost(); 
	void setNumOfBabies(int); 
	int getNumOfBabies(); 
	void setPayoff(int); 
	double getPayoff(); 
	void setBaseFoodCost(); 
	double getBaseFoodCost(); 
	void validateBase(int&);
 
	void isAdult(int); 


	~Animal();
};

#endif



