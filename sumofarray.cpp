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

int grt=0;
    cout<<"greatest number is "<<endl;
    for(i=0;i<n;i++)
    {
       if(arr[i]>grt)
       grt=arr[i];
    }
    
cout<<grt<<endl;


return 0;
}