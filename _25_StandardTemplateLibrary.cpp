/*
STL is a library which provides us with pre-built,general 
purpose classes and functions for the implementation of commonly used data structures and algorithms.

STL has 3 componenets:-
1)Containers:-
  Conatainers are objects which contain all the data on which actions are to be performed eg:-stack,vector,queue
2)Algorithms
  algorithms provide the procedure for performing specific actions on the containers.

3)Iterators
  They provide a path between the containers and algorithms

*/
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
    hash <int> o1;
    hash <char> o2;
    hash <string> o3;
    cout<<"Hash value of int is"<<o1(-25);
    cout<<"Hash value of int is"<<o2('A');
    cout<<"Hash value of int is"<<o3("hello");
    vector <int> v1;
    v1.push_back(1);
    v1.push_back(10);
    v1.push_back(100);
    vector <int>:: iterator i;
    for(i=v1.begin();i!=v1.end();++i)
    {
        cout<<*i<<endl;
    }
}