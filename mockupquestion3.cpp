#include <iostream>
using namespace std;
class B {
 public:
 B(){
 cout << "B's constructor" << endl;
 }
 ~B(){
 cout << "B's destructor" << endl;
 }
};
class C {
 static int n;
 public:
 C(){
 cout << "C's constructor # " << ++n << endl;
 }
 ~C(){
 cout << "C's destructor # " << n-- << endl;
 }
};
int C::n=0;
class A {
 protected:
 B *b;
 C c,d;
public:
 A(){
 b= new B();
 cout << "A's constructor" << endl;
 }
 ~A(){
 delete b;
 cout << "A's destructor" << endl;
 }
};
class D : public A {
 public:
 D(){
 cout << "D's constructor" << endl;
 }
 ~D(){
 cout << "D's destructor" << endl;
 }
};
int main(){
 D a[2];
 return 0;
}