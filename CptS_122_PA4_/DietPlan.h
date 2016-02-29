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
public:			//public access specifer
	DietPlan(int newGoal = 0, string newName = "", string newDate = "")
			: mGoal(newGoal), mName(newName), mDate(newDate) {}

	DietPlan(DietPlan &rhs); //copy constructor
	~DietPlan(); //destructor

	//wtf is this???
	DietPlan & operator= (const DietPlan &rhs);

		//+=...does this mean overloaded operator??
	DietPlan add(DietPlan rhs);

	void printDietPlan();

	//setters
	void setGoal(const int newGoal);
	void setName(const string newName);
	void setDate(const string newDate);

	//getters

	int getGoal() const;
	string getName() const;
	string getDate() const;


	//Should prompt the user for a plan name and a new goal,and use the value to change the goal in the plan.
	//Each time a plan is changed, the plan must be displayed to the screen, using an overloaded stream instertion operator
	editGoal()
	{


	}

private:		//prviate access specifer

	int mGoal;	//desired max calories per day
	string mName;
	string mDate;
};


//ostream & operator << (ostream &output, DietPlan &rhs); //cout << r1;
//istream & operator << (istream &input, DietPlan &rhs); //cin << r1;

