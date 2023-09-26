#include<iostream>
using namespace std;

class base{
    public:
    int num1=10;

    private:
    int num2=20;

    protected:
    int num3=30;
};

class derived1 :virtual public base{

     public:
    void showpublicd1()
    {
        cout<<num1<<endl;
    }

    
     void showprotectdd1()
    {
        cout<<num3<<endl;
    }


};

class derived2 :virtual public base{

     public:
    void showpublicd2()
    {
        cout<<num1<<endl;
    }

    
     void showprotectdd2()
    {
        cout<<num3<<endl;
    }


};

class child : public derived1, public derived2
{
      public:
    void showpublic()
    {
        cout<<num1<<endl;
    }

    
     void showprotectd()
    {
        cout<<num3<<endl;
    }

};


int main()
{

    child ch;
   
    cout<<ch.num1;
    return 0;
}