#include <iostream>
#include "templateMethod.h"

using namespace std;

int main (int argc, char* args[]) {
	
	Bar bar;
	Foo &foo = bar;
	
	foo.useTemplateMethod ();
	foo.useMessageMap ();
	return 0;
}