#include<iostream>
using namespace std;

class A{
    public:
    A()
    {
        cout<<"A constructor"<<endl;
    }


};

class B{
    public:
    B()
    {
        cout<<"B constructor"<<endl;
    }


};

class C{
   public:
    C()
    {
        cout<<"C constructor"<<endl;
    }


};

int main()
{
    A a;
    B b;
    C c;
    return 0;
}