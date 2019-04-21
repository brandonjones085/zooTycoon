#include "Zoo.h"
#include "Penguin.h"
#include "Tiger.h"
#include "Turtle.h"
#include "Animal.h"

#include <iostream>


Zoo::Zoo()
{
	days = 0; 
	moneyInBank = 100000; 
	numOfPenguin = 0; 
	Penguin *penguinArray = new Penguin[10];
	numOfTiger = 0; 
	Tiger *tigerArray = new Tiger[10];
	numOfTurtle = 0; 
	Turtle *turtleArray = new Turtle[10];

}


void Zoo::startZoo()
{
	

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
			int choice; 
			std::cout << "How many would you like to buy? 1 or 2? \n";
			std::cin >> choice; 

			if (choice == 1)
			{
				//add a tiger
				addTiger();
				subtractTigerCost(); 
			}
			else
			{
				//add a tiger
				for (int i = 0; i < choice; i++)
				{
					addTiger(); 
					subtractTigerCost();
				}
			}
				
		}
		else if (num == 2) // For penguin
		{
			int choice;
			std::cout << "How many would you like to buy? 1 or 2? \n";
			std::cin >> choice;
			if (choice == 1)
			{
				addPenguin();
				subtractPenguinCost(); 
			}
			else
			{
				for (int i = 0; i < choice; i++)
				{
					addPenguin();
					subtractPenguinCost();
				}
			}

		
		}
		else if (num == 3)//Adds turtle
		{
			int choice;
			std::cout << "How many would you like to buy? 1 or 2? \n";
			std::cin >> choice;
			if (choice == 1)
			{
				addTurtle();
				subtractTurtleCost();
			}
			else
			{
				for (int i = 0; i < choice; i++)
				{
					addTurtle();
					subtractTurtleCost();
				}
			}
			
			
		}

	}

	

}





void Zoo::addTiger()
{

	Tiger *t;
	int i = getNumOfTiger();

	t = new Tiger[i];


	for (int j = 0; j < i; j++)
	{
		t[j] = tigerArray[j]; 
	}

	numOfTiger++; 
	delete[] tigerArray; 

	tigerArray = new Tiger[i]; 

}


int Zoo::getNumOfTiger()
{
	return numOfTiger; 
}

void Zoo::subtractTigerCost()
{
	Tiger ti; 
	moneyInBank -= ti.getCost(); 
}


void Zoo::addPenguin()
{
	int i = getNumOfPenguin(); 
	Penguin *p = new Penguin[i];

	for (int j = 0; j < i; j++)
	{
		p[j] = penguinArray[j]; 
	}

	numOfPenguin++; 
	delete[] penguinArray; 

	penguinArray = new Penguin[i]; 

}


int Zoo::getNumOfPenguin()
{
	return numOfPenguin; 
}

void Zoo::subtractPenguinCost()
{
	Penguin p;
	moneyInBank -= p.getCost();
}


void Zoo::addTurtle()
{
	int i = getNumOfTurtle(); 
	Turtle *t = new Turtle[i]; 

	for (int j = 0; j < i; j++)
	{
		t[j] = turtleArray[j]; 
	}
	numOfTurtle++; 
	delete[] turtleArray; 

	turtleArray = new Turtle[i]; 


}

int Zoo::getNumOfTurtle()
{
	return numOfTurtle; 
}


void Zoo::subtractTurtleCost()
{
	Turtle tu;
	moneyInBank -= tu.getCost();
}



Zoo::~Zoo()
{
	delete[] tigerArray; 
	delete[] penguinArray; 
	delete[] turtleArray;

}
