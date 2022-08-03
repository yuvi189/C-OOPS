#include<iostream>
#include<string.h>
using namespace std;

template <class x>//function template
x fun(x a,x b)//x can take any types of value but both a and b will have the same data type i.e if a is int,b also has to be int.
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


template <class x,class y>
void show(x a,y b)//In this case,we take different entities for both the variables so that both a and b can be different data types simultaneously.
{
    cout<<a<<endl;
    cout<<b<<endl;
}


int main()
{
    int a=20,b=-30;
    float c=32.54,d=23.33;
    char t='z',v='Z';
    cout<<fun(a,b)<<endl;
    cout<<fun(c,d)<<endl;
    cout<<fun(t,v)<<endl;
    show(a,c);
    show(b,d);
    show(v,c);
}
