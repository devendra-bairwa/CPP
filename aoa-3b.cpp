#include<iostream>
using namespace std;

int odd(int a, int b)
{
    for( int i=min(a,b);i<=max(a,b);i++)
    {
        if(i%2!=0)
        cout<<i<<" ";
    }
return 0;
}

int main()
{

int a,b;
cin>>a>>b;
odd(a,b);
return 0;
}