/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the header file for the Tiger class which inherits from the Animal class
*******************************************************************************/

#ifndef TIGER_HPP
#define TIGER_HPP

#pragma once
#include "Animal.h"

class Tiger : public Animal
{
protected: 
	

public:
	Tiger(); 
	double tigerBaseFoodCost();
	
	
	~Tiger();
};

#endif
