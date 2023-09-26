
#include <iostream>
using namespace std;


class complex 
{
    private:
    int real,imag;

    public:
    complex(int r=0,int i=0)
    {
        real =r;
        imag=i;

    }

    void print()
    {
        cout<<"complex number is "<<real<<"+"<<imag<<"i"<<endl;
    }

    friend complex operator+(complex const &c1,complex const &c2);
};

 complex operator+(complex const &c1,complex const &c2)
{
    return complex(c1.real+c2.real,c1.imag+c2.imag);
}

int main()
{
    complex c1(3,4),c2(5,6);
    complex c3=c1+c2;
    c3.print();
    return 0;
}