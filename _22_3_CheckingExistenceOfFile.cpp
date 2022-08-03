#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream obj;
    obj.open("Inexistent.txt");
    if(!(obj))//obj gives 1 if the file exists and it gives 0 if the file is inexistent
    {
        cout<<"file does not exist"<<endl;
    }
    obj.open("testingggggg.txt");
    if(!(obj))//obj gives 1 if the file exists and it gives 0 if the file is inexistent
    {
        cout<<"file does not exist"<<endl;
    }
    

}