#include<iostream>
#include<typeinfo>
using namespace std;



/*
int main()

{
    int x=10;
    int *ptr = &x;

    cout<<x<<endl;//10
    cout<<*ptr<<endl;//10
    cout<<&x<<endl;//add
    cout<<ptr<<endl;//add

    
    
     cout<<x<<endl;

}
*/


int i;
void getdata(int arr[],int n)
{
    cout<<"function call"<<endl;
    for( i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }



}


int main()

{
    int arr[]={5,7,6,4,1,8};

    int n=sizeof(arr)/sizeof(arr[0]);
cout<<"inside main function"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    
cout<<endl;
getdata(arr,n);
return 0;

//nullptr

}

