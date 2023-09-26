#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,temp,temp1,count=0,res=0,i;
    cout<<"enter octal number"<<endl;
    cin>>num;
    temp=num;

    while(temp!=0)
    { temp=temp/10;
       count++;

    }
    temp=num;
    for(i=0;i<count;i++)
    { temp1=temp%10;
      res+=(temp1* pow(8,i));
      temp=temp/10;

    }
    cout<<"decimal number is"<<res;
    return 0;
}