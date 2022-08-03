#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream obj("Story.txt");
    char a;
    obj.get(a);
    while(!(obj.eof()))
    {
        cout<<a;
        obj.get(a);
    }
    obj.close();
}
