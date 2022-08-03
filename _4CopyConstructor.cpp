#include<iostream>
#include<string>
using namespace std;
class Yuvraj
{
    public:
    int age;
    string name;
    Yuvraj(int age,string name)//parameterized constructor 
    {
        this-> age=age;
        this -> name = name;
    }

    Yuvraj(Yuvraj &m)/* This is a copy constructor.
                        Here,m is the object from which the 
                        details for the new object are 
                        being copied
                    */ 
                    
    {
        this ->age=m.age;// x.age is the age of obj1 in this case 
        this ->name=m.name;// x.name is the name of obj1 in this case
    }

};
int main()
{
    Yuvraj obj1(18,"ghodu");

    Yuvraj obj2(obj1);//creating an object "obj2" with the same details as obj1
                     // copy constructor will be called
                      
    cout<<"The name of obj1 is :- "<<obj1.name<<endl;
    cout<<"The age of obj1 is :- "<<obj1.age<<endl;
    cout<<"The name of obj2 is :- "<<obj2.name<<endl;
    cout<<"The age of obj2 is :- "<<obj2.age<<endl;

}