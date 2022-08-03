/*
There are 4 file pointers:-
1)seekg(number of bytes,reference parameter):-
  It is used to move the cursor in the file,as per our need,while reading the file.
  seekg(5,ios::beg)//moves the cursor by 5 bytes from the beginning.
  seekg(5,ios::cur)//moves the cursor by 5 bytes from the curren position.
  seekg(5,ios::end)//moves the cursor by 5 bytes from the end of the file.


2)seekp():-
  It is used to move the cursor in the file,as per our need,while writing into the file.
 

3)tellg():-
  It ised used to tell the position of the cursor while reading a file.

4)tellp():-
  It is used to the tell the position of the cursor while writing into a file.

*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream obj("testing.txt");
    char a;
    int position;
    position=obj.tellg();
    cout<<position<<endl;
    obj.seekg(5);
    obj.seekg(5,ios::cur);
    position=obj.tellg();
    cout<<position<<endl;
    obj.get(a);
    cout<<a<<endl;
    obj.seekg(-3,ios::end);
    position=obj.tellg();
    cout<<position<<endl;
    obj.get(a);
    cout<<a<<endl;



}