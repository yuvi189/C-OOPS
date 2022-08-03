#include<iostream>
#include<string.h>
using namespace std;
class parent
{
    protected:
    int age;
    string name;
    void set_data(int age,string name)
    {
        this->age=age;
        this->name=name;
    }


};
class child : public parent
{
    void get_data()
    {
        cout<<"age = "<<this->age<<endl;
        cout<<"name = "<<this->name<<endl;
    }
};