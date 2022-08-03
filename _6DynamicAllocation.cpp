/* 

Basic Syntax For Dynamic Memory Allocation In C++
  => Data_Type *(variable_name)=new Data_Type;
  => example :- int *a=new int;                       
  
*/

#include<iostream>
#include<string>
using namespace std;
class student
{
    int age;
    string name;
    double boards_percentage;
    public:
    int get_age()
    {
        return age;
    }
    string get_name()
    {
        return name;
    }
    double get_boardspercentage()
    {
        return boards_percentage;
    }
    void set_age(int a1)
    {
        age=a1;
    }
    void set_name(string a2)
    {
        name=a2;
    }    
    void set_boardspercentage(double a3)
    {
        boards_percentage=a3;
    }

};

int main()
{
    student obj_static;//static allocation
    obj_static.set_age(23);
    obj_static.set_boardspercentage(45.89);
    obj_static.set_name("lodu");
    cout<<(obj_static.get_name())<<endl;;
    cout<<(obj_static.get_age())<<endl;;
    cout<<(obj_static.get_boardspercentage())<<endl;;

    student *obj=new student;//Dynamic Memory Allocation where student is the dataType
    obj->set_age(17);
    (*obj).set_age(17);
    (*obj).set_boardspercentage(95.33);
    obj->set_name("Yuvraj Behki");
    cout<<(obj->get_age())<<endl;;
    cout<<((*obj).get_boardspercentage())<<endl;
    cout<<(obj->get_name())<<endl;;
}
 /* There Are Two Ways To Call Functions 
    of Dynamically Created Objects :-
    1. (*object).memberFunction()
    2. object-> member function
*/