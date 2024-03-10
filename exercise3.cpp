#include <iostream>
using namespace std;

class C
{
private:
	int x;

public:
	C(int x) : x(x)
	{
		cout << "C::C(int x)" << endl;
	}

	~C()
	{
		cout << "C::~C()" << endl;
	}

};

class A
{
private:
	C c; // composition

public:
	A(int x) : c(x)
	{
		cout << "A::A(int x)" << endl;
	}

	~A()
	{
		cout << "A::~A()" << endl;
	}
};

class B : public A // inheritance
{
private:
	D d; // composition

public:
	B(int x) : A(x)
	{
		cout << "B::B(int x1, int x2)" << endl;	
	}

	~B()
	{
		cout << "B::~B()" << endl;
	}
};

class D
{
private:
	E e; // composition

public:
	D(int x = 42) : e(x)
	{
		cout <<
	}
	~D()
	{
		cout << ""
	}
};

int main()
{
	B *b = new B(42, 108);
	// heap object is created
	// (1) A::x is created in heap
	// (2) A's constructor is triggered -> A(42) -> A::x = 42
	// (3) B::x is created in heap
	// (4) B's constructor is triggered -> B(108) -> B::x = 108

	delete b;
	// (5) B's destructor is triggered
	// (6) A's destructor is triggered
	return 0;
}