#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no";
    cin>>n;
int i=2;
    while( n>=i)
    {
        
       if(n%i==0)
       {
       cout<<i<<endl;
       break;
       }
       

       i++;
    }

}