#include<iostream>
using namespace std;
/*
class complex 
{
    protected:
    float real=20,imag=25;

public:

void getdata()
{
   int a=14,b=12,y;

y=real+imag;
cout<<y<<endl;
}

void setdata()
{
    string h="hello",m="hiii";
cout<<h<<endl<<m<<endl;

}


};

int main()
{
    complex c1,c2;
    c1.getdata();
    c2.setdata();
 
    
return 0;
}
*/

//constructor

class geeks
{
    private:
    static int num;
    public:
    static int getdata(int num)
    {
        //count ++;
        return num*num;
    }

    geeks()
    {
        num ++;
        cout<<"constructor called"<<endl;

    }
    ~geeks()
    {
        num --;
        cout<<"\ndestructor called"<<endl;

    }

};
int geeks::num =0;

int main()
{
    geeks g1,g2;
   cout<< g1.getdata(5);
 //   g2.getdata(3);

 //   cout<<geeks::getdata(2);
   
return 0;
}
