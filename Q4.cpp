#include<iostream>
#include<string.h>
using namespace std;
class Travel
{
    string source;
    string destination;
    int distance;
    int fair;
    public:
    void get_data(int distance, string source , string destination)
    {
        this -> distance = distance;
        this -> source = source;
        this -> destination = destination;
    }
    int FairCalc()
    {
        int b= this -> distance;
        if(b<=5)
        {
            fair= 3* this -> distance;
        }
        else if(b>=6 && b<=10)
        {
           this -> fair= 2* this -> distance;
        }
        else
        {
            this -> fair = this -> distance;
        }
        return (this -> fair);
    }
    void show_data()
    {
        cout<<"Distance ="<< this -> distance<<endl;
        cout<<"source ="<< this -> source<<endl;
        cout<<"destination ="<< this -> destination<<endl;
        cout<<"fair ="<< this -> fair<<endl;
    }



};

int main()
{
    int n;
    cout<<"Enter the number of travellers on the bus";
    cin>>n;
    Travel arr[n];
    for(int i=0;i<n;i++)
    {
        int distance;
        string source , destination;
        cout<<"Enter the distance"<<endl;
        cin>>distance;
        cout<<"Enter the source"<<endl;
        cin>>source;
        cout<<"Enter the destination"<<endl;
        cin>>destination;
        
        arr[i].get_data(distance , source , destination);
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Details of traveller "<< i+1 <<"is as follows"<<endl;
        arr[i].FairCalc();
        arr[i].show_data();
    }
}