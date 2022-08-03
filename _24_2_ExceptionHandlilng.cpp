#include<iostream>
using namespace std;
void fun(int a,int b)
{
    if(b==0)
    {
        throw "exception occurred";
    }
    else
    {
        cout<<"a/b= "<<a/b<<endl;
    }
}
int main()
{
    try
    {
        fun(10,2);
        fun(20,0);//once an exception is thrown,the try or catch block is not entered again.
        fun(30,6);
    }
    catch(const char * x)
    {
        cout<<x<<endl;
    }
    
}