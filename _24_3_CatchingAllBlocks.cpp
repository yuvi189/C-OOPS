#include<iostream>
using namespace std;
void exhandling(int x,int y)
{
    try
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
    catch(...)
    {
        cout<<"exception caught"<<endl;
    }
    
}
int main()
{
    exhandling(10,20);
    
}