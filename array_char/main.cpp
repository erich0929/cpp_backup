#include <stdio.h>

void print_char (const char *arrayToPointer []);
void print_char1 (const char *arrayToPointer [1]);
void print_char2 (const char **arrayToPointer);

void print_3Dchar (char impChar [][30][30]);

int main (int argc, char** argv) {
	
	// array to pointer.
	const char *arrayToPointer [] = 
	{
		"Lionel Messi",
		"Ronaldo",
		NULL
	};
	
	//print_char (arrayToPointer);
	//print_char1 (arrayToPointer);
	//print_char2 (arrayToPointer);
	
	// array to 2 Dimension array
	char arrayToChar2D [2][30][30] = 
	{
		{
			{'L', 'i', 'o', 'n', 'e', 'l', ' ', 'M', 'e', 's', 's', 'i'}	
		},
		{
			{'R', 'o', 'n', 'a', 'l', 'd', 'o'}	
		}
	};
	
	print_3Dchar (arrayToChar2D);
	
	int arrayToInt1D [3][5] = 
	{
		{1,2,3,4,5}
	};
	
	return 0;
}

void print_3Dchar (char impChar [][30][30]) {
	
	int i = 0;
	for (i = 0; i < 2; i++) {
		int j = 0;
		while (impChar [i][0][j]) {
			printf ("%c", impChar [i][0][j]);
			j++;
		}
		putchar ('\n');
	}
	
}

void print_char2 (const char **pointer) {
	int i = 0;
	while (pointer [i]) {
		printf ("%s\n", pointer [i]);
		i++;
	}
}

void print_char1 (const char *arrayToPointer [1]) {
	int i = 0;
	while (arrayToPointer [i]) {
		printf ("%s\n", arrayToPointer [i]);
		i++;
	}
}

void print_char (const char *arrayToPointer []) {
	int i = 0;
	while (arrayToPointer [i]) {
		printf ("%s\n", arrayToPointer [i]);
		i++;
	}
}