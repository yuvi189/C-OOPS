#include<fstream>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
//    ofstream h("hello.txt");
//    string n;
//    cout<<"Enter 'no' to end and anything else to get started"<<endl;
//    cin>>n;
//    cin.ignore();
//    while(n!="no")
//    {
//        string sen;
//        cout<<"Enter sentence to be written in text file \n";
//        getline(cin,sen);//Used for taking string with spaces as input.
//        //h<<sen;
//        for(int i=0;i<sen.length();i++)
//        {
//            h.put(sen[i]);
//        }
//        cout<<"Enter 'no' to end or anything else to keep going"<<endl;
//        cin>>n;
//        cin.ignore();
//    }

ifstream obj("hello.txt");
string a;
while(getline(obj,a))
{
    cout<<a<<".";
}
obj.close();


}