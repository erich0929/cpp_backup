#include <iostream>

using namespace std;

class Fib {
	public :
	Fib () : a0_ (1), a1_ (1) { cout << "constructor" << endl; }
	//int operator () ();
	
	private :
	int a0_, a1_;
};
/*
int Fib::operator () (){
	int temp = this -> a0_;
	a0_ = a1_;
	a1_ = temp + a0_;
	return temp;
}
*/
int main (int argc, char** argv) {
	Fib fib;
	
	//cout << fib () << endl;
	
	return 0;
}