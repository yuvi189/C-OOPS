#include<iostream>
using namespace std;

class test
{
    int a;
    int b;
    int c;
    public:
    friend void setData(test &obj);
    friend void getData(test &obj);
    friend test operator+(test &obj1,test &obj2);
};
void setData(test &obj)
{
    cout<<"Enter the value of a"<<endl;
    cin>>obj.a;
    cout<<"Enter the value of a"<<endl;
    cin>>obj.b;
    cout<<"Enter the value of a"<<endl;
    cin>>obj.c;

}
void getData(test& obj)
{
    cout<<"a is"<<obj.a<<endl;
    cout<<"b is"<<obj.b<<endl;
    cout<<"c is"<<obj.c<<endl;
}
test operator+(test &obj1,test &obj2)
{
    test obj3;
    obj3.a=(obj1.a)+(obj2.a);
    obj3.b=(obj1.b)+(obj2.b);
    obj3.c=(obj1.c)+(obj2.c);
    return obj3;
}


int main()
{
    test t1,t2,t3;
    setData(t1);
    setData(t2);
    getData(t1);
    getData(t2);
    t3=t1+t2;
    t3=operator+(t1,t2);
    getData(t3);

}