#include<iostream>
#include<string.h>
using namespace std;
class Alpha
{
    int age;
    public:
    Alpha()
    {

    }
    Alpha(int age)
    {
        this->age=age;
    }
    ~Alpha()
    {
        cout<<"age= "<<this->age<<endl; 
    }

};

class beta 
{
    string name;
    public:
    beta()
    {

    }
    beta(string name)
    {
        this->name=name;
    }
    ~beta()
    {
        cout<<"name= "<<this->name<<endl;;
    }
};

class gamma : private Alpha,private beta
{
    double marks;
    public:
    gamma(double marks)
    {
        this->marks=marks;
    }
    ~gamma()
    {
        cout<<"marks = "<<this->marks<<endl;
    }

};

int main()
{
    Alpha *obj1=new Alpha(20);
    beta *obj2=new beta("Yuvraj");
    gamma *obj3=new gamma(82493);
    delete obj3;
    delete obj1;
    delete obj2;
}
