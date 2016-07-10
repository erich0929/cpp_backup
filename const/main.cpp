#include <iostream>
#include <string>

using namespace std;

class Foo {
	
	public :
		Foo ();
		void print () const;
		void set_foo (string foo);
		void set_bar (string bar);
	
	private :
		mutable string foo;
		string bar;		
};

Foo::Foo () {
	this -> foo = "hello ";
	this -> bar = "world";
}

void Foo::set_foo (string foo) {
	this -> foo = foo;
}

void Foo::set_bar (string bar) {
	this -> bar = bar;
}

void Foo::print () const {
	this -> foo = "Hello "; // member foo is mutable, can be changed in const member function.
	//this -> bar = "World"; // member bar is not mutable.
	cout << this -> foo + this -> bar << endl;
}

int main (int argc, char** argv) {
	Foo foo;
	const Foo *const bar = &foo; // reference v
	//bar = &foo;
	//foo.set_foo ("Hello ");
	bar -> print ();
	return 0;
}