// multi level inheritance

#include <iostream>
using namespace std;

class base1
{
public:
    int a, b, c;

    base1()
    {
        cout << "enter the value of a,b,c" << endl;
        cin >> a >> b >> c;
    }
};

class base2
{
public:
    int x, y, z;

    base2()
    {
        cout << "enter the value of x,y,z" << endl;
        cin >> x >> y >> z;
    }
};

// class derived : public base1,base2

class derived : public base2, base1
{
public:
    derived()
    {
        cout << a + b + c + x + y + z << endl;
    }
};

int main()
{
    derived w;
    // cout<<w.a<<endl<<w.b<<endl<<w.c<<endl;
    cout << w.x << endl
         << w.y << endl
         << w.z << endl;

    return 0;
}
