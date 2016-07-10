#pragma once
#include <string.h>

class String
{
private :
	
	int m_nLen;
	char *m_pStr;
	
public :
	
	String (const char *);
	~String ();
	
	String (const String& str);
	int length () const;
	char* getCharArray () const;
};

// implementation
String::String (const char *pStr) {
	m_nLen = strlen (pStr) + 1;
	m_pStr = new char [m_nLen];
	strcpy (m_pStr, pStr);
}

String::~String () {
	delete [] m_pStr;
}

String::String (const String& str) {
	m_nLen = str.m_nLen;
	m_pStr = new char [m_nLen];
	strcpy (m_pStr, str.getCharArray ());
}

int String::length () const {
	return m_nLen;
}

char* String::getCharArray () const {
	return m_pStr;
}