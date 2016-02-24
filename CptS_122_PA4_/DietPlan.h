#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::istream;
using std::fstream;
using std::ifstream;
using std::ofstream;

class DietPlan
{
private:		//prviate access specifer

	int goal;	//desired max calories per day
	string name;
	string date;

public:			//public access specifer
	DietPlan()	//constructor; member function auto executed
	{			// when an object is created. An argument is pass here
				// when an object is created.


	}

	DietPlan(DietPlan &dphs); //copy constructor
	~DietPlan(); //destructor

	editGoal()
	{


	}
}
