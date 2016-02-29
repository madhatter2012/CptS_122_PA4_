//gotta goo

#include "FitnessAppWrapper.h"
#include "DietPlan.h"
#include "ExercisePlan.h"

ExercisePlan::ExercisePlan(int newGoal, string newName, string newDate)
{
	goal = newGoal; //desired # of steps per day
	name = newName;
	date = newDate;
};

ExercisePlan::ExercisePlan(ExercisePlan &rhs) //copy constructor
{

}
~ExercisePlan() //destructor
{
	int eat = 0;
}

