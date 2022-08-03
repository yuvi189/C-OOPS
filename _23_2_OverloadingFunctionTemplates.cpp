#include<iostream>
#include<string.h>
using namespace std;
template <class x>
x fun(x a,x b)
{
    cout<<"Template function called"<<endl;
    return a+b;
}
int fun(int x,int y)//when a template function and a normal function are involved in overloading,the non-template function is always preferred.
{
    cout<<"Non-Template function called"<<endl;
    return x+y;
}

int main()
{
    cout<<fun(10,20)<<endl;
    cout<<fun('a','b')<<endl;
    cout<<fun('A',10);//In this case,the ascii value of A will be considered and thus,the non template function will be called.
}