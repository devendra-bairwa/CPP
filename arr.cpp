#include<iostream>
using namespace std;
int main()
{
    int i,n=4;
    int arr[n];

    

    cout<<"enter no "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    cout<<"no are "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

bool issorted = true;

for(i=1;i<n;i++)
{
    if(arr[i]<arr[i-1])
    {
    issorted = false;
    break;
    }
   
}

if(issorted)
cout<<"sorted"<<endl;

else
   cout<<"unsorted"<<endl;



return 0;
    
}