#include <iostream>
using namespace std;

class A
{
private:
	int x;

public:
	A(int x) : x(x)
	{
		cout << "A::A(int x)" << endl;
	}

	~A()
	{
		cout << "A::~A()" << endl;
	}

	int get_x() const
	{
		return this->x;	
	}
};

class B : public A
{
private:
	int x; // hides A::x

public:
	B(int x1, int x2) : A(x1), x(x2)
	{
		cout << "B::B(int x1, int x2)" << endl;	
	}

	~B()
	{
		cout << "B::~B()" << endl;
	}

	int get_x() const
	{
		return this->x;
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