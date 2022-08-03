#include<iostream>
using namespace std;
template <class x,class y,int age>
void fun(x a,y b)
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"age is "<<age<<endl;
}
int main()
{
    fun<char,int,50>('a',30);
}
