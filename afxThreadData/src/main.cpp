#include <iostream>
#include <sys/time.h>
#include <stdio.h>

#define SIZE	100000

using namespace std;

typedef unsigned char BYTE; 

class AfxThreadData {
private :
	static unsigned int count;

public :
	inline AfxThreadData ();
	~AfxThreadData ();
	
};

AfxThreadData::AfxThreadData ()
{
	//count ++;
	cout << "Constructor" << count ++ << endl;
}

AfxThreadData::~AfxThreadData ()
{
	//cout << "Destructor" << endl;
}

unsigned int AfxThreadData::count = 0;

BYTE afxThreadData [sizeof (AfxThreadData) * SIZE];

int main (int agc, char *args[]) {
	//int start = clock ();
	struct timeval start_t, end_t;
	(void) gettimeofday (&start_t, NULL);
	int i = 0;
	AfxThreadData arr_afxThreadData [SIZE];
	//AfxThreadData *p_threadData = new AfxThreadData [SIZE];
	/*
	for (i = 0; i < SIZE; i++) 
	{
		AfxThreadData *p_seek = (AfxThreadData *) &afxThreadData [0];
		AfxThreadData *p_threadData = new (p_seek++) AfxThreadData;
		p_threadData -> ~AfxThreadData();	
	}
	*/
	//int  end = clock ();
	(void) gettimeofday (&end_t, NULL);
	cout << "Execution time : " << end_t.tv_sec - start_t.tv_sec << endl;
	//cout << "execution time : " << (end - start)  << endl;
	return 0;
}