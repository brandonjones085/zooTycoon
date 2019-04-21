
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



	Animal a; 
	a.setMoneyInBank(100000); 

	int moneyLeft = a.getMoneyInBank(); 

	a.setBaseFoodCost();
	Zoo z; 
	

	while (again == 1)
	{
		z.startZoo(); 

		std::cout << "Day number: " << days << std::endl; 
		std::cout << "Money left in the bank: " << moneyLeft << std::endl; 
	


		//Pause until user presses enter
		std::cin.clear(); 
		std::cin.sync(); 
		std::cin.ignore(); 
		days++;


		//Asks user if they'd like to continue
		std::cout << "Enter 1 to continue playing or 2 to quit: "; 
		std::cin >> again; 
	}


	
	std::cout << "\n\nGoodbye\n\n"; 

	


	return 0; 
}

