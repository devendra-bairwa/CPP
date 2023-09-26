#include<iostream>
using namespace std;

struct complex 
{
   
    int real,imag;

};

int main()
{
    complex n1,n2,n3;
    cout<<"enter the complex number 1"<<endl;
    cin>>n1.real>>n1.imag;

     cout<<"enter the complex number 2"<<endl;
    cin>>n2.real>>n2.imag;

    n3.real=n1.real+n2.real;
    n3.imag=n1.imag+n2.imag;

 cout<<"addition of complex number is "<<endl;
    cout<<n3.real<<"+"<<n3.imag<<"i"<<endl;

    return 0;
    
}
