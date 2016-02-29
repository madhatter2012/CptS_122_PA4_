

#include "FitnessAppWrapper.h"
#include "DietPlan.h"
#include "ExercisePlan.h"

DietPlan::DietPlan(int newGoal, string newName, string newDate) //constructor
{
	mGoal = newGoal; //desired # of calories per day
	mName = newName;
	mDate = newDate;
};


DietPlan::DietPlan(DietPlan &rhs) //Copy constructor
{

}
DietPlan::~DietPlan() //destructor
{

}

void DietPlan::setGoal(const int newGoal)
{
}

void DietPlan::setName(const string newName)
{
}

void DietPlan::setDate(const string newDate)
{
}

int DietPlan::getGoal() const
{
	return 0;
}

string DietPlan::getName() const
{
	return string();
}

string DietPlan::getDate() const
{
	return string();
}


//Wtf? I think this is some kind of print out put stuff??
/*
ostream & operator<< (ostream &output, DietPlan &rhs)
{
	output << rhs.getDate() << " / " << rhs.getDate


}
istream & operator<< (ostream &input, DietPlan &rhs)
*/