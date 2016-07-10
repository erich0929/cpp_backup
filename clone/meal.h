#include <iostream>

using namespace std;

class Meal {
	public :
		//virtual ~Meal ();
		virtual void eat () const = 0;
		virtual Meal *clone () const = 0;	
};

class Bread : public Meal {
	public :
		Bread () {};
		~Bread () {};
		Bread (const Bread &) {};
		void eat () const { cout << "eat some bread" << endl; } ;
		Meal *clone () const { return new Bread (*this); };
};