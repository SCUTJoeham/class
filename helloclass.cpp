#include "helloclass.h"

using namespace std;

HelloClass::HelloClass()
{
	cout << "I am created!" << endl;
}

HelloClass::~HelloClass()
{
	cout << "I am destroyed!" << endl;
}

void HelloClass::sayHello()
{
	cout << "Hello Class!" << endl;
}


