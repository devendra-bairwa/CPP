#include<iostream>
#include <cstring>
using namespace std;

void comp()
{


string str="geekforgeeks";
int sr=str.find("for");
if(sr==string::npos)
cout<<"not present"<<endl;
else
cout<<"present at index "<<sr<<endl;

}


void lengthfindsub()
{
    
    string srt;
    srt = "geekforgeek";
    cout<<srt<<endl;
    cout<<srt.length()<<endl;
    srt=" hello";
    cout<<srt<<endl;
    cout<<srt.substr(1,3)<<endl;
    cout<<srt.find("fo");

}

void gerline()
{
    string name;
    cout<<"enter your name :";
    getline(cin,name,'#');
    cout<<name;


}


void traverse()
{
    string str = "geekforgeeks";
for(int i=0;i<str.length();i++)
{
cout<<str[i];

}
cout<<endl;
}

void strlenn()
{
    char str[] = "geekforgeeks";
    cout << strlen(str) << endl;
}


void reverseal()
{
    string s1;
    cout<<"enter a string :"<<endl;
    getline(cin,s1,'^');

    for(int i=s1.length();i>=0;i--)
    {
        cout<<s1[i];
    }

}


int main()
{
    

 reverseal();




    return 0;

}