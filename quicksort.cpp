#include<iostream>
#include<conio.h>
using namespace std;
int partition(int [],int ,int);
void quick_sort(int [],int,int);
int main()
{

int a[10],n,i;
cout<<"ENTER THE NO. OF ELEMENTS TO BE SORTED:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nEnter the elements "<<i+1<<"\t";
cin>>a[i];
}
quick_sort(a,0,n-1);
for(i=0;i<n;i++)
{
cout<<"\nSorted elements are :";
cout<<a[i]<<"\n";
}
getch();
}
void quick_sort(int a[],int lb,int ub)
{
int mid;
if(lb>=ub)
return;
mid=partition(a,lb,ub);
quick_sort(a,mid+1,ub);
quick_sort(a,lb,mid-1);
}
int partition(int a[],int lb,int ub )
{
int down,up,t,pivot;
down=lb;
up=ub;
pivot=a[lb];
while(down<up)
{
while(a[down]<=pivot&&down<up)
down++;
while(a[up]>pivot)
up--;
if(down<up)
{
t=a[down];
a[down]=a[up];
a[up]=t;
}
}
a[lb]=a[up];
a[up]=pivot;
return(up);
}