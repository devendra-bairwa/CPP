#include <iostream>
using namespace std;

class base
{
public:
    string name;

public:
    void getname()
    {
        cout << "enter name :" << endl;
        getline(cin, name);
    }
};

class derived : public base

{
public:
    int rollno;

public:
    long long mobile;

public:
    void getroll()
    {
        cout << "enter roll no:" << endl;
        cin >> rollno;
    }

    void getmobile()
    {
        cout << "enter mobile :" << endl;
        cin >> mobile;
    }
};

class child : public derived
{
public:
    void getdata()
    {
        cout << name << endl
             << rollno << endl
             <<mobile<<endl;
    }
};

int main()
{
    child c;
  c.getname();
    c.getroll();
    c.getmobile();
    c.getdata();
    cout<<c.mobile<<endl;
    cout<<c.rollno<<endl;
    cout<<c.name<<endl;

/*
child *c;
c->getmobile();
c->getdata();

*/
    return 0;

}