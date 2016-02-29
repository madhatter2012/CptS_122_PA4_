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

class ExercisePlan
{

public:

	ExercisePlan(int newGoal = 0, string newName = "", string newDate = "");

private: //prviate access specifer

	int goal; //desired # of steps per day
	string name;
	string date;

};

ExercisePlan(ExercisePlan &rhs); //copy constructor
~ExercisePlan(); //destructor

