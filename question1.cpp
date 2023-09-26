#include<iostream>
using namespace std;
/*
423
multi=4*2*3=24
sum=4+2+3=9
diff=24-9=15
*/
int main()
{
    int n;
    cin>>n;

    int sum=0,multi=1,num;
    
   do
    {
        num=n%10;
        multi=multi*num;
        sum=sum+num;
        n=n/10;
    }while(n>0);
    
    cout<<multi<<endl;
    cout<<sum<<endl;
    cout<<multi-sum<<endl;
    return 0;
}