/*

Relational Operators
   <,<=,>,>=,==,!=

*/
#include<iostream>
using namespace std;
class test
{
    int a,b,c;
    public:
    void setData(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void getData()
    {
        cout<<"a is"<<this->a<<endl;
        cout<<"b is"<<this->b<<endl;
        cout<<"c is"<<this->c<<endl;
    }
    bool operator<(test obj)
    {
        bool a;
        if (((this->a)<(obj.a)) && ((this->b)<(obj.b)) && ((this->c)<(obj.c)))
        {
            a=true;
        }
        else
        {
            a=false;
        }
        return a;
    }
};
void checker(int x)
{
    if(x==1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}
int main()
{
    test t1,t2,t3;
    t1.setData(20,30,40);
    t2.setData(50,60,70);
    t3.setData(80,90,100);
    bool a;
    a=(t1<t2);
    checker(int(a));
    a=(t3<t2);
    checker(int(a));


}
