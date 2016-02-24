#include "FitnessAppWrapper.h"
#include "DietPlan.h"
#include "ExercisePlan.h"

int displayMenu(void)
{
	int choice = 0;
	printf("Welcome to Basic Fitness Manager Alpha EX Pro 15\n\n");

	printf("Enter a number from the menu\n\n");

	printf("1. Load weekly diet plan from file\n");
	printf("2. Load weekly exercise Plan from file\n");
	printf("3. Store weekly diet plan to file\n");
	printf("4. Store weekly exercise plan to file\n");
	printf("5. Display weekly diet plan to screen\n");
	printf("6. Display weekly exercise plan to screen\n");
	printf("7. Edit daily diet plan\n");
	printf("8. Edit daily exercise plan\n");
	printf("9. Exit\n");

	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
		load_music();
		break;
	case 2:
		store_music();
		break;
	case 3:
		display_music();
		break;
	case 4:
		sort_music();
		break;
	case 5:
		delete_music();
		break;
	case 6:
		edit_music();
		break;
	case 7:
		rate_music();
		break;
	case 8:
		exit_music();
		break;
	default:
		main_menu();
		break;
	}

	void loadDailyPlan()
		void loadWeeklyPlan()
		displayDailyPlan()
		displayWeeklyPlan()
		storeDailyPlan()
		storeWeeklyPlan()