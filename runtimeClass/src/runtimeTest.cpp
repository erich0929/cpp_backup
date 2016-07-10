#include <iostream>
#include "runtime.h"

class Base : public CObject {

	DECLARE_DYNCREATE (Base);
		
};

IMPLEMENT_RUNTIMECLASS (Base, CObject);

int main () {
	
	CRuntimeClass* runtime = RUNTIME_CLASS (Base);
	std::cout << runtime -> m_className << std::endl;
	
	return 0;
}