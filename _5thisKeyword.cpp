/* 
   --> this keyword is used to differentiate between two different entities having the same name
   --> It is a pointer which stores the address of an object
   --> It points towards the current object
*/
#include<iostream>
#include<string>
using namespace std;
class abcd
{
    int age;
    string name;
    public:

    abcd()//non-parameterized constructor
    {
        cout<<"This is a cosntructor"<<endl;
        cout<<"value of this keyword :- "<<this<<endl;
    }
    abcd(int age)//parametrized constructor 
    {
        cout<<"value of this keyword is :- "<<this<<endl;
        this-> age=age;// this ->age corresponds to the object's age
                       /* 
                       
                       And the age on RHS is the value assigned to 
                       the object's age , which is given as the argument 
                       while calling the parametrized constructor  

                       */
    }
    abcd(int age,string name)
    {
        cout<<"constructor overloading"<<endl;
        this -> age=age;
        this -> name=name;  
    }
    int get_age()
    {
        return age;
    }
    string get_name()
    {
        return name;
    }
    void set_name(string name)
    {
        this -> name=name;
    }
    void set_age(int age)
    {
        this -> age= age;
    }

};
int main()
{
    abcd Yuvraj;//calling non-parameterized constructor 
    Yuvraj.set_name("ghodu");
    Yuvraj.set_age(17);
    cout<<"Name :-"<<(Yuvraj.get_name())<<endl;
    cout<<"age :-"<<(Yuvraj.get_age())<<endl;
    cout<<"The address of object Yuvraj is :-"<<&Yuvraj<<endl;

    abcd Girish(20);//calling parameterized constructor
    Girish.set_name("Lodu");
    cout<<"Name :-"<<(Girish.get_name())<<endl;
    cout<<"age :-"<<(Girish.get_age())<<endl;
    cout<<"The address of object Girish is :-"<<&Girish<<endl;

    abcd Overloaded_obj(20,"ghodu");//calling overloaded constructor with 2 parameters
    cout<<(Overloaded_obj.get_age())<<endl;;
    cout<<(Overloaded_obj.get_name())<<endl;



}
