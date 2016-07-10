#include <iostream>
#include "factory.h"

using namespace std;

class Foo {
	public : 
	void bar () { cout << "class foo, bar method." << endl; };
};

int main () {
	
	Factory <Foo> fooFactory;
	Foo *foo = fooFactory.getInstance ();
	foo -> bar ();
	
	return 0;
}