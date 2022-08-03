#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream obj("Story.txt");
    string a;
    while(getline(obj,a,'.'))
    {
        cout<<a<<"."<<endl;
    }
    obj.close();
}