//hybrid inheritance

#include<iostream>
using namespace std;
//cant use base in other classes
class base
{
    public:
     int  b1,b2,b3;

    virtual void next()
    {
        cout<<"enter b1,b2,b3 "<<endl;
        cin>>b1>>b2>>b3;

    }
};

class derived1:public virtual base
{
    public:
    int d1,d2,d3;

    derived1()
    {
        cout<<"enter d1,d2,d3 "<<endl;
        cin>>d1>>d2>>d3;

    }

};

class derived2:public virtual base
{
    public:
    int f1,f2,f3;

    derived2()
    {
        cout<<"enter f1,f2,f3 "<<endl;
        cin>>f1>>f2>>f3;

    }

};


class child:public derived1,public derived2
{
    public:
    child()
    {
       
     cout<<f1+f2+f3+d1+d2+d3<<endl;
       
    } 
};


int main()
{
    child l;
    

    return 0;
}