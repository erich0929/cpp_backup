#include <iostream>
#include <string>

using namespace std;

class Foo {
	public :
	Foo () { this -> foo = "Hello World."; }; // implicit inline
	void toString () const { cout << this -> foo << endl; }; 
	
	private :
	string foo;	
};