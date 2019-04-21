#pragma once
class Animal
{

protected: 
	
	int age; 
	int cost; 
	int numOfBabies; 
	int baseFoodCost; 
	double payoff; 


public:
	Animal();
	Animal(int a, int c, int nOB, int bFC, int p, int mib); 
	void setAge(int); 
	int getAge(); 
	void setCost(int);
	int getCost(); 
	void setNumOfBabies(int); 
	int getNumOfBabies(); 
	void setPayoff(int); 
	double getPayoff(); 
	void setBaseFoodCost(); 
	int getBaseFoodCost(); 
 
	void isAdult(int); 


	~Animal();
};

