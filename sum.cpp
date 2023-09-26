//sum of first n natural numbers

#include<iostream>
using namespace std;

int main()
{
    int n,sum;

    cout<<"enter the number";
    cin>>n;

    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}