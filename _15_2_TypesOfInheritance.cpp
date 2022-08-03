/*
There are folllowing 5 types of inheritance:-

1.Single Inheritance:-
  =>When a single sub-class is created from a single Parent-class,it is the case of single inheritance.

2.Multiple Inheritance:-
  =>When a single sub-class is created from 2 or more parent-classes,it is the case of multiple inheritance.

3.Multi-Level Inheritance:-
  =>When a sub-class is created from another sub-class,it is the case of Multi-Level Inheritance.

4.Hierarchical Inheritance
  =>When multiple sub-classes are created from a single parent-class,it is the case of Hierarchical Inheritance.

5.Hybrid Inheritance:-
  =>When multiple types of inheritance are combined together,it is the case of Hybrid Inheritance.

*/


#include<iostream>
using namespace std;
class parent
{
    public:
    int age;
    private:
    string name;
    protected:

};



class child_of_parent : public parent// Single Inheritance
{

};



class child1 : public child_of_parent// Multi-Level Inheritance
{

};



class child2 : public child_of_parent,public child1// Multiple Inheritance as well as Hierarchical Inheritance , Thus=> Hybrid Inheritance.
                                                  // child2 and child1 are both inheriting child_of_parent 
{

};