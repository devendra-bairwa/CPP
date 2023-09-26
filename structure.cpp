#include<iostream>
using namespace std;

struct student
{
    string name,secton,address;
    int rollno;
    long long mobile;

};

int main()
{
    student s1;
    cout<<"enter name";
    getline(cin,s1.name);

   // cout<<"enter  section adrress roll no and mobile no "<<endl;
   // cin>>s1.secton>>s1.address>>s1.rollno>>s1.mobile;

    cout<<s1.name;
    return 0;
}