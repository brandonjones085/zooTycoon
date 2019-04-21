#pragma once
#include "Penguin.h"
#include "Tiger.h"
#include "Turtle.h"



class Zoo : public Animal
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
	void showTigers(); 
	void addPenguin(); 
	int getNumOfPenguin(); 
	void subtractPenguinCost(); 
	void showPenguins(); 
	void addTurtle(); 
	int getNumOfTurtle(); 
	void subtractTurtleCost(); 
	void showTurtles(); 
	double getMoneyInBank(); 
	void setMoneyInBank(int); 
	void addDay(); 
	void subtractTotalFoodCost(); 
	void payoffForDay(); 


	~Zoo();
};

