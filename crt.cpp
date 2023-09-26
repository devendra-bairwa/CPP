#include<iostream>
using namespace std;


void fib(int n)
{
    int a,b,next;
    a=0;
    b=1;
    
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        next=a+b;
        a=b;
        b=next;
        

        
    }
    return;


}

int main()
{
    int n;
    cout<<"enter a number ";
    cin>>n;

   fib(n);

    return 0;
}
