//Q1 Operator Overloading

#include<iostream>
using namespace std;
class Distance//creation of class
{
    int x;
    int y;
    public:
    void setData(int x,int y)//member function to assign values to data members
    {
        this->x=x;
        this->y=y;
    }
    void getData()//member function to print the values of data members
    {
        cout<<"x= "<<this->x<<endl;
        cout<<"y= "<<this->y<<endl;
    }
    Distance operator+(Distance &obj)//Overloading the binary + operator to add 2 objects
    {
        Distance h;
        h.x=(this->x)+(obj.x);
        h.y=(this->y)+(obj.y);
        return h;
    }
};

int main()
{
    Distance obj1,obj2,obj3;
    obj1.setData(10,20);
    obj2.setData(85,55);
    obj3=obj1+obj2;
    obj3.getData();
}