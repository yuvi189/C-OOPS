#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream obj("Filemodes.txt");
    //If we create an obejct of ofstream class,by default it will open the file in ios::out mode
    obj<<"There are several types of file modes";
    obj<<"\n";
    obj<<"1.Append Mode(ios::app)";
    obj<<"\n";
    obj<<"In append mode,if the file exists already,the cursor goes to the end of the file and we can add more content to the file without overwriting it.If the file does not exist already,a new file is created";
    obj<<"\n";
    obj<<"2.Update Mode(ios::ate)";
    obj<<"\n";
    obj<<"In update mode,by default the cursor moves to the end of the file if the file exists.We can add on the already existing content.But, unlike append mode,if the file does not exist,a new file is not created";
    obj<<"\n";
    obj<<"3.Binary Mode(ios::binary)";
    obj<<"\n";
    obj<<"Normally,when we open a file,it is opened in text mode.But if we open a file in binary mode,then the text is converted into binary form and we can read and write in this file";
    obj<<"\n";
    obj<<"4.in mode(ios::in)";
    obj<<"\n";
    obj<<"This is the default mode in ifstream.we can only read from a file using this mode.If the files does not exist already,it is not created and the open function fails.";
    obj<<"\n";
    obj<<"5.out mode(ios::out)";
    obj<<"\n";
    obj<<"It is the default mode of ofstream mode.If the file already exists,it is overwritten.If the file does not exist already,it is created";
    obj<<"\n";
    obj<<"6.NoReplace Mode(ios::noreplace)";
    obj<<"\n";
    obj<<"In this mode,if the file is already existing then ,the open function will fail and the file will not open.";
    obj<<"\n";
    obj<<"7.NoCreate Method(ios::nocreate)";
    obj<<"\n";
    obj<<"In this mode,if the file does not exist already,the open function will fail and no new file will be created.";
    obj.close();

    fstream x("file123.txt",ios::out);//When we create objects using fstream , we need to specify 
                                        //the mode , because it is used for both input and output.


}