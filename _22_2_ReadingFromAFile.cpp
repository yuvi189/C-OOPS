#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream obj("yuvraj123.txt");
    // char c;
    // obj>>c;
    // while(!(obj.eof()))//eof is an inbuilt function of ifstream which returns true if we have reachhed the end of the file.
    // {
    //     cout<<c;
    //     obj>>c;
    // }

    // cout<<"------------------------------------------------------------------------------------------------"<<endl;
    // // This will work and we will be able to print the contents of the file,BUT this method does not 
    // // display the spaces that are present in the text file.
    // // Thus,we use an inbuilt function of the ifstream called the get function which is used to read
    // // the file character by character and it does not skip the spaces 
    
    char a;
    obj.get(a);
    while(!(obj.eof()))
    {
        cout<<a;
        obj.get(a);
    }
    obj.close();
    // cout<<"------------------------------------------------------------------------------------------------"<<endl;

    // ifstream x("Filemodes.txt");
    // char b;
    // x.get(a);
    // while(!(x.eof()))
    // {
    //     cout<<a;
    //     x.get(a);
    // }
    // x.close();
}