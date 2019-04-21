#pragma once
#include "Penguin.h"
#include "Tiger.h"
#include "Turtle.h"



class Zoo
{
private:
	int days; 
	int moneyInBank; 
	int numOfPenguin; 
	int numOfTiger; 
	int numOfTurtle; 
	Penguin *penguinArray;
	Tiger *tigerArray;
	Turtle *turtleArray;


public:
	Zoo(); 
	
	
	void startZoo(); 
	void addTiger(); 
	int getNumOfTiger(); 
	void subtractTigerCost(); 
	void addPenguin(); 
	int getNumOfPenguin(); 
	void subtractPenguinCost(); 
	void addTurtle(); 
	int getNumOfTurtle(); 
	void subtractTurtleCost(); 
	



	~Zoo();
};

