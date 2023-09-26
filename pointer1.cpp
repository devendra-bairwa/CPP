//product pointer
#include<iostream>
using namespace std;

int product (int a, int b)
{
    int *ptra=&a;
    int *ptrb=&b;
    return (*ptra) * (*ptrb);
}

int main()
{
    int a, b;
    cin>>a>>b;
    int *ptr,t;
    
    
   cout<< product(a,b);
    return 0;
}