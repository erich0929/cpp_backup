#define DECLARE_DYNCREATE(class_name) \
public: \
	static const CRuntimeClass class##class_name; \
	static CRuntimeClass* GetThisClass (); \
	virtual CRuntimeClass* GetRuntimeClass () const; \
	static CObject* CreateObject ();

#define IMPLEMENT_RUNTIMECLASS(class_name,base_class_name) \
	const CRuntimeClass class_name::class##class_name = { \
		#class_name, sizeof(class class_name), &class_name::CreateObject, &base_class_name::GetThisClass \
	}; \
	CRuntimeClass* class_name::GetThisClass () { return RUNTIME_CLASS(class_name); } \
	CRuntimeClass* class_name::GetRuntimeClass () const { return RUNTIME_CLASS(class_name); } \
	CObject* class_name::CreateObject () { return new class_name; }

#define RUNTIME_CLASS(class_name) \
	((CRuntimeClass*) (&class_name::class##class_name));

class CObject;

struct CRuntimeClass {
	char* m_className;
	int m_objectSize;
	CObject* (*m_fnCreateObject) ();
	CRuntimeClass* (*m_fnGetBaseClass) ();
};

class CObject {
	public :
	static CRuntimeClass classCObject;
	static CRuntimeClass* GetThisClass () { return &classCObject; };
	static CObject* CreateObject () { return new CObject (); };
};

CRuntimeClass CObject::classCObject = {"CObject", sizeof (class CObject), CObject::CreateObject, NULL};

