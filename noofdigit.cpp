#include<iostream>
using namespace std;

void digit(int a)
{int count;
   while(a>0)
   {
    a=a/10;
    count++;
    
   }
   cout<<"no of digit will be "<<count<<endl;

   cout<<"square of digit will be "<<count*count<<endl;

}

int main()
{
    int a;
    cin>>a;
    digit(a);
}