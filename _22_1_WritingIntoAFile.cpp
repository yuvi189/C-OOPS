/*
ios is the parent stream
ios has 2 streams:-
1)istream:-
  Used for taking input from keyboard and putting it into your program.(cin is an object of this class/stream)
  It further has a child stream:-
  ifstream:-Used for taking input from a file an putting it into your program

2)ostream
  Used for displaying the data from the program to screen(cout is an object of this class/stream)
  It further has a child stream:-
  ofstream:-used for putting the output of your program into a file.

   File => Program [ifstream]
   program => File [ofstream]
   For Both => [fstream]

*/
#include<iostream>
#include<fstream>//fstream=((ifstream)+(ofstream))
using namespace std;
int main()
{
  ofstream obj;//creating a stream for writing into a file.
              //Similar to how ostream has an object cout,we have to build our own object of ofstream for writing into a file.

  //ofstream obj("testing.txt");//This is the same as creating an object and using open command.

  obj.open("testing.txt");//if a file with this name does not exist already,a new file will be created by opening it.


  //cout<<"hello Yuvraj"<<endl;//cout is an object of ostream class 
                              //In the case of ofstream class,we do not have a pre-built object so we have to create one.
  obj<<"hello Yuvraj";//Similar to how cout displays, whatever we write,on the screen.
                     //obj<< will write whatever we instruct it to,in the corresponding file.

  obj.close();//A file  must always be closed.

}