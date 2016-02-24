
//kkkkkk
#include "FitnessAppWrapper.h"
#include "DietPlan.h"
#include "ExercisePlan.h"

DietPlan::DietPlan(int newGoal, string newName, string newDate) //constructordfsfadsfadsfadsf
{
	goal = newGoal; //desired # of steps per day
	name = newName;
	date = newDate;
};


DietPlan::DietPlan(DietPlan &dphs) //Copy constructor
{

}
DietPlan::~DietPlan() //destructor
{

}