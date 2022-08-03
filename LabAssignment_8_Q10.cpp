#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream obj("hello.txt");
    char a;
    int count_words=0;
    int count_sen=0;
    string w;
    int count_char=0;
    while(!(obj.eof()))
    {
        obj.get(a);
        count_char++;
    }
    obj.close();
    
    ifstream x("hello.txt");
    while(getline(x,w))
    {
        cout<<w<<endl;
        for(int i=0;i<(w.length());i++)
        {
            if (w[i]=='.'|| w[i]=='?' || w[i]=='!')
            {
                count_sen++;
                count_words++;
            }
            else if(w[i]==' ')
            {
                count_words++;
            }
        }
    }
    cout<<"There are "<<--count_char<<" characters"<<endl;
    cout<<"There are "<<count_words<<" words"<<endl;
    cout<<"There are "<<count_sen<<" sentences"<<endl;

}