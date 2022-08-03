#include <iostream>

using namespace std;

class Exam 
{

public:

virtual void display ()=0;

virtual void showl() {cout<<"Exam is going on ";} 
void show2 () {cout<<"I like C++ ";}

};


class EST: public Exam
{

public:

void display() {cout<<"UTA018 ";}

void showl() {cout<<"EST is going on "; }
void show2() {cout<<"I don't like C++ ";}
};


int main() 
{

Exam *el=new EST;

el->display();

el->showl ();

el->show2();

}