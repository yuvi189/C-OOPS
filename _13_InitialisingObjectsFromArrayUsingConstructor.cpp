#include<iostream>
#include<string.h>
using namespace std;
static int obj_count=0;
class yuvraj
{
    int age;
    string name;
    public:
    yuvraj()
    {
        cout<<"default constructor called"<<endl;
    }
    yuvraj(int x,string y)
    {
        obj_count++;
        this -> age =x;
        this -> name = y;   
    }
    void get_data()
    {
        cout<<"age ="<< this -> age<< endl;
        cout<<"name ="<< this -> name<< endl;
    }
};

int main()
{
    yuvraj arr[10];
    for(int i=0;i<5;i++)
    {
        int age;
        string name;
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        arr[i]=yuvraj(age,name);//calling a constructor using an object in array.
    }
    for(int i=0;i<5;i++)
    {
        arr[i].get_data();
    }
    cout<<"number of objects created is = "<<obj_count<<endl;

}