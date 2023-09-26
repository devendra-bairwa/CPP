#include<iostream>
using namespace std;

//prime no.



void prime(int num1,int num2)
{
    int i;
    for(i=num1;i<=num2;i++)
    {
      if(i%2==0)
        {
            cout<<i<<endl;
        }
    }
}


int main()
{
    int a,b;
    cout<<"enter two numbers :";
    cin>>a>>b;

    prime(a,b);

    return 0;

}
