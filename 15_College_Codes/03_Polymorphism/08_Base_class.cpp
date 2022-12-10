#include <iostream>
using namespace std;

class A {
public:
	int a;

	A() 
	{
		a = 10;
	}
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main()
{
	D object;

	cout << "a = " << object.a << endl;

	return 0;
}
