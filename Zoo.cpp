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

double Zoo::getMoneyInBank()
{
	return moneyInBank; 
}


void Zoo::setMoneyInBank(double in)
{
	moneyInBank = in; 
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

	tigerArray = new Tiger[numOfTiger]; 

	for (int i = 0; i < numOfTiger -1; i++)
	{
		tigerArray[i].setAge(t[i].getAge()); 
	}

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


void Zoo::showTigers()
{
	for (int i = 0; i < numOfTiger; i++)
	{
		std::cout << "Tiger number " << i +1 << std::endl; 
		std::cout << "Days old: " << (tigerArray[i]).getAge() << std::endl;

	}
	std::cout << std::endl;
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

	penguinArray = new Penguin[numOfPenguin]; 

	for (int i = 0; i < numOfPenguin-1; i++)
	{
		penguinArray[i].setAge(p[i].getAge());
	}

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

void Zoo::showPenguins()
{
	for (int i = 0; i < numOfPenguin; i++)
	{
		std::cout << "Penguin number " << i + 1 << std::endl;
		std::cout << "Days old: " << (penguinArray[i]).getAge() << std::endl;
		
	}
	std::cout << std::endl;
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


	turtleArray = new Turtle[numOfTurtle]; 


	for (int i = 0; i < numOfTurtle -1; i++)
	{
		turtleArray[i].setAge(t[i].getAge()); 	
	}


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

void Zoo::showTurtles()
{
	for (int i = 0; i < numOfTurtle; i++)
	{
		std::cout << "Turtle number " << i +1<< std::endl;
		std::cout << "Days old: " << (turtleArray[i]).getAge() << std::endl;
	}
	std::cout << std::endl;
}

void Zoo::addDay()
{
	
	for (int i = 0; i < numOfTiger; i++)
	{
		
		tigerArray[i].setAge(tigerArray[i].getAge()+1); 
	}
	for (int i = 0; i < numOfPenguin; i++)
	{
		penguinArray[i].setAge(penguinArray[i].getAge()+1); 
	}
	for (int i = 0; i < numOfTurtle; i++)
	{
		turtleArray[i].setAge(turtleArray[i].getAge() + 1);
	}
}

void Zoo::subtractTotalFoodCost()
{

	double tigerCost = ((getBaseFoodCost() * 5) * numOfTiger); 
	double penguinCost = (getBaseFoodCost()) * numOfPenguin;
	double turtleCost = (getBaseFoodCost() * 0.5) * numOfTurtle;

	std::cout << "Tiger Food cost " << tigerCost << std::endl; 
	std::cout << "Penguin Food cost " << penguinCost << std::endl;
	std::cout << "Turtle Food cost " << turtleCost << std::endl;


	double foodTotal = tigerCost + penguinCost + turtleCost; 
	double oldTotal = getMoneyInBank(); 

	double newTotal = oldTotal - foodTotal; 

	setMoneyInBank(newTotal); 

	std::cout << std::endl; 
}



void Zoo::payoffForDay()
{
	Tiger ti; 
	Penguin p; 
	Turtle tu; 

	double tigerPayout = (ti.getCost() * 0.2) * numOfTiger; 
	double penguinPayout = (p.getCost() * 0.1) * numOfPenguin;
	double turtlePayout = (tu.getCost() * 0.05) * numOfTurtle;

	std::cout << "Tiger payout: " << tigerPayout << std::endl; 
	std::cout << "Penguin payout: " << penguinPayout << std::endl;
	std::cout << "Turtle payout: " << turtlePayout << std::endl;

	double totalPayout = (tigerPayout + penguinPayout + turtlePayout) + getMoneyInBank();

	setMoneyInBank(totalPayout); 
	
}


void Zoo::buyAnotherAnimal()
{
	char choice = ' '; 
	int animal = 0; 


	std::cout << "Would you like to by an adult animal? y/n \n"; 
	std::cin >> choice; 
	if (choice == 'y')
	{
		std::cout << "Enter 1 for a Tiger\n"; 
		std::cout << "Enter 2 for a Penguin\n";
		std::cout << "Enter 3 for a Turtle\n"; 
		std::cin >> animal; 

		if (animal == 1)//buy a tiger
		{
			//addAdultTiger(); 
		}
		else if (animal == 2)//buy a penguin
		{
			//addAdultPenguin(); 
		}
		else if (animal == 3)//but a turtle
		{
			addAdultTurtle(); 
		}
		

	}
	
}


void Zoo::addAdultTiger() 
{

	int i = getNumOfTiger();
	Tiger *t = new Tiger[i];

	for (int j = 0; j < i; j++)
	{
		t[j] = tigerArray[j];
	}


	numOfTiger++;
	delete[] tigerArray;


	tigerArray = new Tiger[numOfTiger];

	tigerArray[numOfTiger - 1].setAge(3); //Sets the age of the animal to 3 days old


	for (int i = 0; i < numOfTiger - 1; i++)
	{
		tigerArray[i].setAge(t[i].getAge());
	}

}

void Zoo::addAdultPenguin()
{
	int i = getNumOfPenguin();
	Penguin *p = new Penguin[i];

	for (int j = 0; j < i; j++)
	{
		p[j] = penguinArray[j];
	}


	numOfPenguin++;
	delete[] penguinArray;


	penguinArray = new Penguin[numOfPenguin];

	penguinArray[numOfPenguin - 1].setAge(3); //Sets the age of the animal to 3 days old


	for (int i = 0; i < numOfPenguin - 1; i++)
	{
		penguinArray[i].setAge(p[i].getAge());

	}
}


void Zoo::addAdultTurtle()
{
	int i = getNumOfTurtle();
	Turtle *t = new Turtle[i];

	for (int j = 0; j < i; j++)
	{
		t[j] = turtleArray[j];
	}


	numOfTurtle++;
	delete[] turtleArray;


	turtleArray = new Turtle[numOfTurtle];

	turtleArray[numOfTurtle -1].setAge(3); //Sets the age of the animal to 3 days old
	

	for (int i = 0; i < numOfTurtle - 1; i++)
	{
		turtleArray[i].setAge(t[i].getAge());
		
	}

}


Zoo::~Zoo()
{
	delete[] tigerArray; 
	delete[] penguinArray; 
	delete[] turtleArray;

}
