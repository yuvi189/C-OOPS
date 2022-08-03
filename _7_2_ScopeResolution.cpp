/* 

2) To define a function outside a class.

*/





// C++ program to show that scope resolution operator :: is used
// to define a function outside a class
#include<iostream> 
using namespace std;
  
class A 
{
public: 
  
   // Only declaration
   void fun1();
   void fun2();
};
  
// Definition outside class using ::
void A::fun1()
{
   cout << "fun1() called";
}
void A::fun2()
{
   cout<<"fun2() called"<<endl;
}
int main()
{
   A a;
   a.fun1();
   a.fun2();
   return 0;
}