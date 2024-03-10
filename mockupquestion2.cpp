#include <iostream>
using namespace std;
class Base{
	public:
	int hold;
	Base(int hold=0){this->hold=hold;}
	virtual void f()
	{hold=2;cout << endl << "hold: " << hold ;}
	virtual void g()=0;
	void h()
	{hold=4;cout << endl << "hold: " << hold ;}
	}; 
	class Derived: public Base{
		public:
		int hold;
		Derived(int hold1=0,int hold2=0):Base(hold2)
		{this->hold=hold1;}
		void f(){
			hold=8;cout << endl << "hold: " << hold;}
		void g(){
			hold=16;cout << endl << "hold: " << hold;}
		void h(){hold=32;cout << endl << "hold: " << hold;}
		}; 
		
	int main(int argc,char *argv[])
	{
		Base *bp = new Derived(-2,-4);
		cout << endl << bp->hold;
		bp->f();
		bp->g();
		bp->h();
		Derived *dp= static_cast<Derived*>(bp);
		cout << endl << dp->hold;
		dp->f();
		dp->g();
		dp->h();   return 0;
	}
