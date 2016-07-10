#include "meal.h"

int main (int argc, char** argv) {
	
	const Meal *thatGuysMeal = new Bread ();
	Meal *myMeal = thatGuysMeal -> clone ();
	myMeal -> eat ();
	
	return 0;
}