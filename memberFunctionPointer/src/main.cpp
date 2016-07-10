#include <iostream>

using namespace std;

class Foo {
    public :
        int foo_func ();
        virtual int foo_virt ();
};

int Foo::foo_func() {
    cout << "foo instance" << endl;
    return 1;
}

int Foo::foo_virt() {
    cout << "foo virt" << endl;
    return 5;
}

class Bar : public Foo {
public :
    int foo_func ();
    int foo_virt ();
private :
    int bar;
};

int Bar::foo_func() {
    this -> bar = 10;
    cout << "bar instance." << endl;
    return 2;
}

int Bar::foo_virt() {
    cout << "bar virt" << endl;
    return 3;
}

typedef int (Foo::*FooMethod) ();

int main () {

    Bar bar;
    Foo &foo = bar;
    Foo pure_foo;
    int (Foo::*m_func) ();

    m_func = (FooMethod) &Bar::foo_func;

    (pure_foo.*m_func) ();

    return 0;
}
