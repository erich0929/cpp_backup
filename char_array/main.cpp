#include <iostream>

using namespace std;

int main (int argc, char** argv) {
	
	char *p_char [] = 
	{
		"string 1",
		"string 2"
	};
	char **arr = p_char;
	while (arr++) {
		cout << **arr << endl;
	}
	return 0;	
}