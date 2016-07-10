#pragma once
#include <iostream>

using namespace std;

class Foo;
class Bar;
class Zoo;

struct MessageMap {
	typedef void (Foo::*FooMethod) ();
	FooMethod fooMethod;
};

class Foo {
	
	public :
	virtual void templateMethod ();
	virtual MessageMap* getMessageMap () = 0; // virtual in mfc ???
	void useTemplateMethod ();
	void useMessageMap ();
};

void Foo::templateMethod () {
	cout << "Foo template method" << endl;
}

void Foo::useTemplateMethod () {
	this -> templateMethod ();
}

void Foo::useMessageMap () {
	MessageMap* messageMap = getMessageMap ();
	MessageMap::FooMethod method = messageMap -> fooMethod;
	(this ->*method) ();
}

class Bar : public Foo {
	private:
	static MessageMap messageMap;
	
	public :
	void templateMethod ();
	MessageMap* getMessageMap (); 
	void barTemplateMethod ();
	
};

// TODO : 
MessageMap Bar::messageMap = {(MessageMap::FooMethod) (&Bar::barTemplateMethod)};

void Bar::templateMethod () {
	cout << "Bar template method" << endl;
}

MessageMap* Bar::getMessageMap () {
	return &Bar::messageMap;
}

void Bar::barTemplateMethod () {
	cout << "It's reflection?" << endl;
}

class Zoo {
	public :
	void zooFunc ();
};

void Zoo::zooFunc () {
	cout << "zoo func" << endl;
}