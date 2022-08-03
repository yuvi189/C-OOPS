#include<iostream>
#include<string>
using namespace std;
class Student
{
    protected:
    int Rollno;
    string name;
    public:
    void get_details(int Rollno,string name)
    {
        this->Rollno=Rollno;
        this->name=name;
    }
    void display_details()
    {
        cout<<this->Rollno<<"\t\t"<<this->name<<"\t    ";
    }

};
class Marks : public Student
{
    protected:
    int Subject_1;
    int Subject_2;
    public:
    void get_marks(int Subject_1,int Subject_2)
    {
        this->Subject_1=Subject_1;
        this->Subject_2=Subject_2;
    }
    void displaymarks()
    {
        cout<<this->Subject_1<<"\t        "<<this->Subject_2<<"\t          "<<(this->Subject_1+this->Subject_2)<<"\t\t\t";
    }

};

class Result : public Marks
{
    int TotalMarks;
    string result;
    public:
    void calculateResult()
    {
        int a=this->Subject_1;
        int b=this->Subject_2;
        this->TotalMarks=a+b;
        if ((this->TotalMarks)>60)
        {
            this->result="PASSED";
        }
        else
        {
            this->result="FAILED";
        }
    }
    void displayResult()
    {
        cout<<this->result;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    Result arr[n];
    for(int i=0;i<n;i++)
    {
        int rno,m1,m2;
        string name;
        cout<<"Enter student roll number"<<endl;
        cin>>rno;
        cout<<"Enter name of student"<<endl;
        cin>>name;
        cout<<"Enter the marks of subject 1"<<endl;
        cin>>m1;
        cout<<"Enter the marks of subject 2"<<endl;
        cin>>m2;
        arr[i].get_details(rno,name);
        arr[i].get_marks(m1,m2);
        arr[i].calculateResult();
        cout<<"\n";
    }
    cout<<"Rollno:        Name     Subject1      Subject2      Total Marks Obtained       Result"<<endl;
    cout<<"---------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        arr[i].display_details();
        arr[i].displaymarks();
        arr[i].calculateResult();
        arr[i].displayResult();
        cout<<"\n";
    }
    cout<<"---------------------------------------------------------------------------------------";

}