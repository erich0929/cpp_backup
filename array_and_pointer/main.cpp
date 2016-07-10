#include <iostream>

using namespace std;

const unsigned int rows = 10;
const unsigned int cols = 5;

extern void print_arr (const long (*arr) [cols], long rows);

int main (int argc, char** argv) {

	long arr [rows][cols] =
		{
			{1,2,3,4,5},
			{6,7,8,9,10},
			{11,12,13,14,15}
		};
		
		print_arr ( &arr [0] , 3);
	
	return 0;
}

void print_arr (const long (*arr) [cols], long rows) {
	long **l_arr = (long **) &arr;
	for (int row = 0; row < rows; row ++) {
		for (int col = 0; col < cols; col ++) {
			cout << *(*l_arr + col) << '\t';
		}
		cout << endl;
		*l_arr += cols;
	}
}