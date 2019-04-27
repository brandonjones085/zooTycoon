/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the header file for the penguin class. Inherits from the Animal class
*******************************************************************************/

#ifndef PENGUIN_HPP
#define PENGUIN_HPP


#pragma once
#include "Animal.h"

class Penguin : public Animal
{
public:
	Penguin();
	double penguinFoodCost(); 
	~Penguin();
};

#endif
