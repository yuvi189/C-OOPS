#include<iostream>
using namespace std;
void exhandling(int x,int y)//throw(int,string)
{
        if(x==0)
        {
            throw 10;
        }
        else if(x<0)
        {
            throw "negative number";
        }
        else
        {
            throw 'x';
        }
    
}
int main()
{
    try
    {
        exhandling(10,20);
    }    
    catch(...)
    {
        cout<<"exception caught"<<endl;
    }
    
}