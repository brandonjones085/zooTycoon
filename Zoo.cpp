/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/21/2019
** Description:  This is the ant class for the langstons ant program
*******************************************************************************/


#include "Zoo.h"
#include "Penguin.h"
#include "Tiger.h"
#include "Turtle.h"
#include "Animal.h"

#include <iostream>
#include <ctime>
#include <cstdlib>



//CONSTRUCTOR
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


/*******************************************************************************
** Description:  First function run in the program. Used to collect inital information from user for the zoo. 
Asks user to begin by buying three different types of animals. They are able to buy 1 or two of each. 
*******************************************************************************/

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
				addTiger();//Adds a tiger to array
				subtractTigerCost(); //Gets cost of tiger and subtracts amount from moneyInBank variable. 
				
			}
			else
			{
				//add a tiger
				for (int i = 0; i < choice; i++)//This loops through the number 2 and adds that many tigers, then subtracts cost
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
				addPenguin();//adds one penguin
				subtractPenguinCost(); //subtracts one penguin cost
				
			}
			else
			{
				//loops through the number 2. Adds that many penguins and subtracts the cost
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
				addTurtle(); //Adds one turtle
				subtractTurtleCost();//Subtracts one turtle cost
				
			}
			else
			{
				//loops through the number 2. Adds that many turtles and subtracts the cost.
				for (int i = 0; i < choice; i++)
				{
					addTurtle();
					subtractTurtleCost();
					
				}
			}
				
		}

	}

}
/*******************************************************************************
** Description:  Function adds a tiger to the array by creating a new array and copying over old array. 
//Source: https://www.cs.nmsu.edu/~rth/cs/cs471/C%2B%2BDynamicArray.pdf
*******************************************************************************/

void Zoo::addTiger()
{


	Tiger *t;
	int i = getNumOfTiger();//returns the number of tigers

	t = new Tiger[i];  //Pointer to a new tiger object


	//Copies over old array to new array
	for (int j = 0; j < i; j++)
	{
		t[j] = tigerArray[j]; 
			
	}

	//Increases the number of tigers by 1
	numOfTiger++; 

	//Deletes old tiger array
	delete[] tigerArray; 

	//Creates new tiger array with new number of tigers
	tigerArray = new Tiger[numOfTiger]; 


	//Copies over age from the original array
	for (int i = 0; i < numOfTiger -1; i++)
	{
		tigerArray[i].setAge(t[i].getAge()); 
	}

}

//Returns the number of tigers
int Zoo::getNumOfTiger()
{
	return numOfTiger; 
}

//Subtracts the cost of a tiger from the moneyInBank variable
void Zoo::subtractTigerCost()
{
	Tiger ti; 
	moneyInBank -= ti.getCost(); 
}

/*******************************************************************************
** Description:  Function loops through the tiger array and prints the tiger number and days old
*******************************************************************************/
void Zoo::showTigers()
{
	for (int i = 0; i < numOfTiger; i++)
	{
		std::cout << "Tiger number " << i +1 << std::endl; 
		std::cout << "Days old: " << (tigerArray[i]).getAge() << std::endl;

	}
	std::cout << std::endl;
}


/*******************************************************************************
** Description:  Function adds a penguin to the array by creating a new array and copying over old array.
//Source: https://www.cs.nmsu.edu/~rth/cs/cs471/C%2B%2BDynamicArray.pdf
*******************************************************************************/

void Zoo::addPenguin()
{
	int i = getNumOfPenguin(); //returns the number of penguins

	Penguin *p = new Penguin[i];//Creates a pointer to new penguin array

	//Copies over old array to new array
	for (int j = 0; j < i; j++)
	{
		p[j] = penguinArray[j]; 
	}

	numOfPenguin++; //Increases numOfPenguin by 1
	delete[] penguinArray; //Deletes old array

	//Creates new array with increased number of penguins
	penguinArray = new Penguin[numOfPenguin]; 


	//Sets the age of the penguins in new array according to original array
	for (int i = 0; i < numOfPenguin-1; i++)
	{
		penguinArray[i].setAge(p[i].getAge());
	}

}


//Returns the number of penguins in array
int Zoo::getNumOfPenguin()
{
	return numOfPenguin; 
}

//Subtracts the cost of a penguin 
void Zoo::subtractPenguinCost()
{
	Penguin p;
	moneyInBank -= p.getCost();
}


/*******************************************************************************
** Description:  Function prints the animal number and days old for each animal
*******************************************************************************/
void Zoo::showPenguins()
{
	for (int i = 0; i < numOfPenguin; i++)
	{
		std::cout << "Penguin number " << i + 1 << std::endl;
		std::cout << "Days old: " << (penguinArray[i]).getAge() << std::endl;
		
	}
	std::cout << std::endl;
}

/*******************************************************************************
** Description:  Function adds a turtle to the array by creating a new array and copying over old array.
//Source: https://www.cs.nmsu.edu/~rth/cs/cs471/C%2B%2BDynamicArray.pdf
*******************************************************************************/
void Zoo::addTurtle()
{
	int i = getNumOfTurtle(); //returns the number of turtles in array

	Turtle *t = new Turtle[i]; //Creates pointer to new Turtle array

	//Copies over old array to new array
	for (int j = 0; j < i; j++)
	{
		t[j] = turtleArray[j]; 
	}

	numOfTurtle++; //Increases the numOfTurtles by 1
	delete[] turtleArray; //Deletes old turtle array

	//Creates new array with increased number of turtles in array
	turtleArray = new Turtle[numOfTurtle]; 

	//Copies information over according to original array
	for (int i = 0; i < numOfTurtle -1; i++)
	{
		turtleArray[i].setAge(t[i].getAge()); 	
	}

}


//Returns the number of Turtles
int Zoo::getNumOfTurtle()
{
	return numOfTurtle; 
}

//Subtracts the cost of a turtle from money in bank
void Zoo::subtractTurtleCost()
{
	Turtle tu;
	moneyInBank -= tu.getCost();
}


/*******************************************************************************
** Description:  Function prints the animal number and days old for each animal
*******************************************************************************/
void Zoo::showTurtles()
{
	for (int i = 0; i < numOfTurtle; i++)
	{
		std::cout << "Turtle number " << i +1<< std::endl;
		std::cout << "Days old: " << (turtleArray[i]).getAge() << std::endl;
	}
	std::cout << std::endl;
}


/*******************************************************************************
** Description:  Function loops through all the animals in the zoo and increases the number of days old by 1
*******************************************************************************/
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


/*******************************************************************************
** Description:  Function gets the base food cost for each animal and multiples that number by the number of animals. 
Then subtracts the total from the amount of money in the bank. 
*******************************************************************************/
void Zoo::subtractTotalFoodCost()
{

	double tigerCost = ((getBaseFoodCost() * 5) * numOfTiger); //Tiger base food cost
	double penguinCost = (getBaseFoodCost()) * numOfPenguin; //Penguin base food cost
	double turtleCost = (getBaseFoodCost() * 0.5) * numOfTurtle;//Turtle base food cost

	//Output for user to see the totals for each animal
	std::cout << "Tiger Food cost $" << tigerCost << std::endl; 
	std::cout << "Penguin Food cost $" << penguinCost << std::endl;
	std::cout << "Turtle Food cost $" << turtleCost << std::endl;


	double foodTotal = tigerCost + penguinCost + turtleCost; //Adding for each animal
	double oldTotal = getMoneyInBank(); //returns money in bank

	double newTotal = oldTotal - foodTotal; //finds new total

	setMoneyInBank(newTotal); //sets new total

	std::cout << std::endl; 
}


/*******************************************************************************
** Description:  Function determines the payoff for each day. Finds the total for each animal. 
Then sets the new amount to the total amount of money in the bank.
*******************************************************************************/
void Zoo::payoffForDay()
{
	//Objects
	Tiger ti; 
	Penguin p; 
	Turtle tu; 

	double tigerPayout = (ti.getCost() * 0.2) * numOfTiger; //Tiger payout
	double penguinPayout = (p.getCost() * 0.1) * numOfPenguin;//Penguin payout
	double turtlePayout = (tu.getCost() * 0.05) * numOfTurtle;//Turtle payout

	//User output to see the total amounts for each animal
	std::cout << "Tiger payout: " << tigerPayout << std::endl; 
	std::cout << "Penguin payout: " << penguinPayout << std::endl;
	std::cout << "Turtle payout: " << turtlePayout << std::endl;

	//Finds the total amount for each animal and adds to the amount in bank
	double totalPayout = (tigerPayout + penguinPayout + turtlePayout) + getMoneyInBank();

	setMoneyInBank(totalPayout); //sets new total to amount in bank
	
}

/*******************************************************************************
** Description:  Function asks user if they would like to buy another adult animal
*******************************************************************************/
void Zoo::buyAnotherAnimal()
{
	char choice = ' '; 
	int animal = 0; 

	//Determins the type of animal the user would like to buy
	std::cout << "Would you like to buy an adult animal? y/n \n"; 
	std::cin >> choice; 
	if (choice == 'y')
	{
		std::cout << "Enter 1 for a Tiger\n"; 
		std::cout << "Enter 2 for a Penguin\n";
		std::cout << "Enter 3 for a Turtle\n"; 
		std::cin >> animal; 

		if (animal == 1)//buy a tiger
		{
			addAdultTiger(); 
		}
		else if (animal == 2)//buy a penguin
		{
			addAdultPenguin(); 
		}
		else if (animal == 3)//but a turtle
		{
			addAdultTurtle(); 
		}
		
	}
	
}

/*******************************************************************************
** Description:  Function adds an adult tiger to the array in a similar method to 
the above function. This just sets the age to 3 days old. 
Source: https://www.cs.nmsu.edu/~rth/cs/cs471/C%2B%2BDynamicArray.pdf
*******************************************************************************/
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

	//Copies over information
	for (int i = 0; i < numOfTiger - 1; i++)
	{
		tigerArray[i].setAge(t[i].getAge());
	}

}


/*******************************************************************************
** Description:  Function adds an adult penguin to the array in a similar method to
the above function. This just sets the age to 3 days old.
Source: https://www.cs.nmsu.edu/~rth/cs/cs471/C%2B%2BDynamicArray.pdf
*******************************************************************************/
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


	//Copies over information
	for (int i = 0; i < numOfPenguin - 1; i++)
	{
		penguinArray[i].setAge(p[i].getAge());

	}
}


/*******************************************************************************
** Description:  Function adds an adult turtle to the array in a similar method to
the above function. This just sets the age to 3 days old.
Source: https://www.cs.nmsu.edu/~rth/cs/cs471/C%2B%2BDynamicArray.pdf
*******************************************************************************/

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
	
	//Copies over information
	for (int i = 0; i < numOfTurtle - 1; i++)
	{
		turtleArray[i].setAge(t[i].getAge());
		
	}

}

/*******************************************************************************
** Description:  Function determins what the random event will be each day
*******************************************************************************/

void Zoo::randEvent()
{
	//Output for user
	std::cout << "\n\nPress Enter for the random event to occur\n"; 
	std::cin.ignore(); 
	std::cin.clear(); 
	std::cin.sync(); 


	srand(time(NULL));
	int num = std::rand() % 4 + 1; //Returns a random number between 1 and 4. 


	if (num == 1)//1 was returned
	{
		std::cout << "\n\nSickness occurs to an animal in the zoo\n\n"; 
		animalSickness(); 

	}
	else if(num == 2)//2 was returned
	{
		std::cout << "\n\nBoom in zoo attendance occurs\n\n";
		attendanceBoom(); 

	}
	else if (num == 3)//3 was returned
	{
		std::cout << "\n\nA baby animal is born\n\n"; 
		babyBorn(); 
	}
	else if (num == 4)//4 was returned
	{
		std::cout << "\n\nNothing happened\n\n";
	}

}

/*******************************************************************************
** Description:  Function first determines if an animal is older than 3 days, then adds that number of babies 
*******************************************************************************/
void Zoo::babyBorn()
{
	std::cout << "baby was born"; 
}


/*******************************************************************************
** Description:  Function returns a random number between 250 and 500, 
then multiplies that by the number of tigers and adds that amount to the daily payout 
//Source::https://stackoverflow.com/questions/4413170/c-generating-a-pseudo-number-between-10-20
*******************************************************************************/
void Zoo::attendanceBoom()
{
	
	srand(time(NULL));
	int num = std::rand() % (500-250) + 250;

	std::cout << "\nWith the attendance boom $" << num << " has been added to the daily payout for each tiger in the zoo\n\n"; 
	num = num * getNumOfTiger(); 

	moneyInBank += num; 

	std::cout << "\nYou now have $" << getMoneyInBank() << " in your accout \n"; 

}


/*******************************************************************************
** Description:  Function returns a random number betwen 1 and 3
to determine which animal will be removed from the array
*******************************************************************************/

void Zoo::animalSickness()
{ 
	std::cout << "\nAnimal was sick\n";

	int num = std::rand() % 3 + 1;

	if (num == 1)
	{
	std::cout << "\nRemove a tiger\n"; 
	removeTiger(); 
	}
	else if (num == 2)
	{
		std::cout << "\nRemove a penguin\n";
		removePenguin(); 
	}
	else if (num == 3)
	{
		std::cout << "\nRemove a turtle\n"; 
		removeTurtle(); 
	}

}
/*******************************************************************************
** Description:  Function works similar to adding a animal, but removes a random animal in array. 
First finds a random number and uses that number for the index of animal which is removed
//Source:: https://stackoverflow.com/questions/879603/remove-an-array-element-and-shift-the-remaining-ones
*******************************************************************************/

void Zoo::removePenguin()
{
	int numOfP = getNumOfPenguin(); 

	int num = std::rand() % numOfP;


	Penguin *p = new Penguin[numOfP];

	for (int i = 0; i < num; i++)
	{
		p[i] = penguinArray[i];
	}

	for (int i = num + 1; i < numOfP; i++)
	{
		p[i - 1] = penguinArray[i]; 
	}

	numOfPenguin--; 

	delete[] penguinArray;

	penguinArray = new Penguin[numOfP - 1];

	
	for (int i = 0; i < numOfP - 1; i++)
	{
		penguinArray[i].setAge(p[i].getAge());

	}

	std::cout << "\nYou now have " << getNumOfPenguin() << " penguins in the zoo\n";

}


/*******************************************************************************
** Description:  Function works similar to adding a animal, but removes a random animal in array.
First finds a random number and uses that number for the index of animal which is removed
//Source:: https://stackoverflow.com/questions/879603/remove-an-array-element-and-shift-the-remaining-ones
*******************************************************************************/

void Zoo::removeTiger()
{
	
	int numOfT = getNumOfTiger();

	int num = std::rand() % numOfT;


	Tiger *t = new Tiger[numOfT];

	for (int i = 0; i < num; i++)
	{
		t[i] = tigerArray[i];
	}

	for (int i = num + 1; i < numOfT; i++)
	{
		t[i - 1] = tigerArray[i]; 
	}

	numOfTiger--; 

	delete[] tigerArray;


	tigerArray = new Tiger[numOfT -1];


	for (int i = 0; i < numOfT -1; i++)
	{
		tigerArray[i].setAge(t[i].getAge());

	}


	std::cout << "\nYou now have " << getNumOfTiger() << " tigers in the zoo\n";

}



/*******************************************************************************
** Description:  Function works similar to adding a animal, but removes a random animal in array.
First finds a random number and uses that number for the index of animal which is removed
//Source:: https://stackoverflow.com/questions/879603/remove-an-array-element-and-shift-the-remaining-ones
*******************************************************************************/
void Zoo::removeTurtle()
{
	
	int numOfT = getNumOfTurtle();

	int num = std::rand() % numOfT;


	Turtle *t = new Turtle[numOfT];

	for (int i = 0; i < num; i++)
	{
		t[i] = turtleArray[i];
	}

	for (int i = num+1; i < numOfT; i++)
	{
		t[i -1] = turtleArray[i];
	}

	numOfTurtle--; 

	delete[] turtleArray;


	turtleArray = new Turtle[numOfT -1];


	for (int i = 0; i < numOfT - 1; i++)
	{
		turtleArray[i].setAge(t[i].getAge());

	}


	std::cout << "\nYou now have " << getNumOfTurtle() << " turtles in the zoo\n";
}

//Deletes all arrays
Zoo::~Zoo()
{
	delete[] tigerArray; 
	delete[] penguinArray; 
	delete[] turtleArray;

}
