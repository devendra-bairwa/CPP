#include<iostream>
using namespace std;

/*
int m=3,n=3,i,j,arr[3][3];

void twodarray()
{
   
    
   
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
        
    }

cout<<"matrix will be:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";


        }
        cout<<endl;
        
    }
}

void transpose()

{
    cout<<"transpose of the matrix will be "<<endl;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[j][i]<<" ";

        }
        cout<<endl;

    }

}

int main()
{
    cout<<"enter matrix"<<endl;
    twodarray();

    transpose();
    return 0;
}

*/

int m=2,n=2,i,j,k, result[2][2];;
int arr1[2][2],arr2[2][2];

void twodarray()
{
   
    cout<<"enter matrix one"<<endl;
   
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr1[i][j];
        }
        
    }


cout<<"enter matrix two"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr2[i][j];
        }
        
    }

cout<<"matrix one will be:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";


        }
        cout<<endl;
        
    }
cout<<"matrix two will be:"<<endl;
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr2[i][j]<<" ";


        }
        cout<<endl;
        
    }
}

void multi()
{
    cout<<"multiplication of matrix is"<<endl;

     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            result[i][j] = 0;
            for(k=0;k<n;k++)
            {
                result[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    
    twodarray();
    multi();
    return 0;
}


