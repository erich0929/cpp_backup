template <class T>
class Factory {
	public :
	
	T* getInstance () { return new T; };
};