#include<iostream>
#include<string>
using namespace std;
class student_details
{
    private:/* 
               Even if we don't write private,the age 
               and name would be private data members 
               because,by default the data members 
               are declared privately. 
            */

    int age;//private data member

    string name;//private data member

    public:  /* 
                Data members are private but the 
                functions manipulating the data members are 
                public and hence we can access these data 
                members outside the class through these public 
                functions.
                
            */
    int get_age()//int function with no parameter to get age
    {
        return age;
    }
    // void set_age(int b)//void fucntion with int parameter to set age
    // {
    //     age=b;
    // }
    string get_name()//string function with no parameter to get age
    {
        return name;
    }
    // void set_name(string a)//void fucntion with string parameter to set name
    // {
    //     name=a;
    // }
    void set_details(int age,string name)
    {
        this -> age=age;
        this -> name=name;
    }
    void greeting()
    {
        cout<<"heel"<<endl;
    }

};
int main()
{
    student_details obj1,obj2,obj3;//creation of objects
    obj1.set_details(18,"yuvraj");
    obj1.set_details(800,"druggy");
    obj2.greeting();
    cout<<"Student Name :- "<<obj1.get_name()<<endl;
    cout<<"Student age :- "<<obj1.get_age()<<endl;
    cout<<"Student Name :- "<<obj2.get_name()<<endl;
    cout<<"Student age :- "<<obj2.get_age()<<endl;

}