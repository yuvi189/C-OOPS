#include<iostream>
#include<string.h>
using namespace std;
class concatt
{
    char sentence[50];//Creating a char array
    public:
    void setData()
    {
        cout<<"Enter string"<<endl;
        cin.getline(this->sentence,50);//We can use just cin if we need to take a single word input.
                                       //cin.getline() is for multiple words input.
        //cin>>this->sentence;
    }
    void getData()
    {
        cout<<this->sentence<<endl;
    }
    concatt operator+(concatt obj)//for string concatenation we must make use of the inbuilt string functions
    {
        concatt x;
        strcat(this->sentence,obj.sentence);//This will conacatenate both this->sentence and obj.sentence and 
                                            //then store the concatenated string in this->sentence .
        strcpy(x.sentence,this->sentence);//This will copy this->sentence in x.sentence .
        return x;
    }
};
int main()
{ 
    concatt s1,s2,s3;
    s1.setData();
    s2.setData();
    s3=s1+s2;
    s3.getData();

}