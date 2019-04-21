
#include "Animal.h"
#include "Tiger.h"
#include "Zoo.h"
#include "Penguin.h"
#include "Turtle.h"

#include <iostream>

int main()
{
	
	int days = 1; 
	int again = 1;


	Zoo z; 
	
	z.startZoo();


	z.setBaseFoodCost(); 

	while (again == 1)
	{
	

		z.showTigers(); 
		z.showPenguins(); 
		z.showTurtles(); 
		
		
		std::cout << "Money in Bank: $" << z.getMoneyInBank() << std::endl;
		std::cout << "Day number: " << days << std::endl; 
		std::cout << std::endl; 
	

		//Pause until user presses enter
		std::cin.clear(); 
		std::cin.sync(); 
		std::cin.ignore(); 

		days++;
		z.addDay(); //Adds a day to the animals in the array
		z.subtractTotalFoodCost(); 
		z.payoffForDay(); 
		
		z.buyAnotherAnimal(); 

		//Asks user if they'd like to continue
		std::cout << "Enter 1 to continue playing or 2 to quit: "; 
		std::cin >> again; 
	}


	
	std::cout << "\n\nGoodbye\n\n"; 

	


	return 0; 
}

