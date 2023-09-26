#include <iostream>
using namespace std;

// single level

class base
{
public:
    int a, b;

    base()
    {
        cout << "enter a and b" << endl;
        cin >> a >> b;
         cout<<"constuctor  called of base "<<endl;
    }
    ~base() {
        cout<<"destructor called of base "<<endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << a * b<<endl;
         cout<<"constructor called of derived "<<endl;
    }
    ~derived()
    {
         cout<<"destructor called of derived "<<endl;
    }
};

int main()
{
    derived d;
}

/*
#include <iostream>
using namespace std;

int d, e, f;
class base

{
    int a = 4, b = 2, c = 3;

public:
    void setdata1();
    void setdata2();
};

void base::setdata1()
{

    d = a + b + c;
    e = a;
}

void base::setdata2()
{

    f = a * b * c;
}

class derived : public base
{

public:
    void getdata1();
    void getdata2();
};

void derived ::getdata1()
{
    cout << e << endl
         << d << endl;
}

void derived ::getdata2()
{
    cout << f;
}

int main()
{
    derived z;

    z.setdata1();
    z.getdata1();

    z.setdata2();
z.getdata2();
    return 0;
}

*/