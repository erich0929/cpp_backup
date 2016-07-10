#include "accum1.hpp"
#include <iostream>

int main () {
	int num [] = {1,2,3,4,5};
	std::cout << "the average value of the integer values is "
		<< accum (&num [0], &num[5]) / 5
		<< '\n';
	return 0;
}
