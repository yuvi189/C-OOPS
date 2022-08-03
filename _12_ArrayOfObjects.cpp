#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int age;
    string name;
    public:
    void get_data()
    {
        cout<< this -> name << endl;
        cout<< this -> age << endl;
    }
    void set_data(int age, string name)
    {
        this -> age=age;
        this -> name =name;
    }

};

int main()


{
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    Student arr[n];//creating an array of objects using the className
    for (int i=0;i<n;i++)
    {
        int age;
        string name;
        cout<<"enter the name of the student"<<endl;
        cin>>name;
        cout<<"enter the age of the student"<<endl;
        cin>>age;
        arr[i].set_data(age,name);//setting the values of objects index-By-index
    }
     
    for(int i=0;i<n;++i)
    {
        arr[i].get_data();//getting the values of objects index-By-index
    }

}
