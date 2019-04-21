#pragma once
#include "Penguin.h"
#include "Tiger.h"
#include "Turtle.h"



class Zoo : public Animal
{
private:
	Penguin *penguinArray;
	Tiger *tigerArray;
	Turtle *turtleArray;


public:
	Zoo(); 
	
	void startZoo(); 
	void addTiger(Tiger *pt, Tiger ti ); 
	void addPenguin(Penguin *pt, Penguin p); 
	void addTurtle(Turtle *pt, Turtle tu); 



	~Zoo();
};

