#include "Zoo.h"
#include "Penguin.h"
#include "Tiger.h"
#include "Turtle.h"
#include "Animal.h"

#include <iostream>


Zoo::Zoo()
{
	Penguin *penguinArray = new Penguin[10];
	Tiger *tigerArray = new Tiger[10];
	Turtle *turtleArray = new Turtle[10];

}


void Zoo::startZoo()
{
	Penguin *penguinArray = new Penguin[10];
	Tiger *tigerArray = new Tiger[10];
	Turtle *turtleArray = new Turtle[10];

	for (int i = 0; i < 3; i++)
	{

		int num = 0; 
		std::cout << "You need to buy three types of animals to start the business ";
		std::cout << "What would you like to buy for animal number " << i + 1 << std::endl;
		std::cout << "You have $" << moneyInBank << " left in the bank" << std::endl; 
		std::cout << "Enter 1 for a tiger \n"; 
		std::cout << "Enter 2 for a penguin \n"; 
		std::cout << "Enter 3 for a turtle \n"; 
		std::cin >> num; 

		if (num == 1)
		{
			Tiger ti; 

			//add a tiger
			addTiger(tigerArray, ti);
			

		}
		else if (num == 2)
		{
			//add a penguin
			Penguin p; 
			addPenguin(penguinArray, p);


		}
		else if (num == 3)
		{
			//add a turtle
			Turtle tu; 
			addTurtle(turtleArray, tu); 
		}

	}

}


void Zoo::addTiger(Tiger *pt, Tiger ti)
{
	
	pt[0] = ti; 
	int cost = moneyInBank - ti.getCost(); 
	setMoneyInBank(cost); 
	
}

void Zoo::addPenguin(Penguin *pt, Penguin p)
{
	
	pt[0] = p; 
	int cost = moneyInBank - p.getCost();
	setMoneyInBank(cost);

}


void Zoo::addTurtle(Turtle *pt, Turtle tu)
{
	
	pt[0] = tu;
	int cost = moneyInBank - tu.getCost();
	setMoneyInBank(cost);

}

Zoo::~Zoo()
{
}
