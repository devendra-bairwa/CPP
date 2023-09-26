#include<iostream>
#include<conio.h>
using namespace std;
class mergesort
{
private:
int a[20],n;
void msplit(int,int);
void merge(int,int,int);
public:
void msort();
void setdata();
void getdata();
};
void mergesort::msort()
{
msplit(0,n-1);
}
void mergesort :: msplit(int first,int last)
{
int mid;
if(first<last)
{
mid=(first+last)/2;
msplit(first,mid);
msplit(mid+1,last);
merge(first,mid,last);
}
}
void mergesort::setdata()
{
int i;
cout<<"\n\n\nEnter the size of array : ";
cin>>n;
cout<<"\nEnter "<<n<<" elements: ";
for(i=0;i<n;i++)
cin>>a[i];
}
void mergesort::getdata()
{
int i;
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
}
void mergesort::merge(int f1,int l1,int l2)
{
int f2,b[20],i,j,k=0;
f2=l1+1;
i=f1;
j=f2;
while(i<=l1&&j<=l2)
if(a[i]<a[j])
b[k++]=a[i++];
else
b[k++]=a[j++];
while(i<=l1)
b[k++]=a[i++];
while(j<=l2)
b[k++]=a[j++];
i=f1;
j=0;
while(i<=l2)
a[i++]=b[j++];
}
int main()
{
mergesort ms;

ms.setdata();
cout<<"\nElements before sorting are : \t";
ms.getdata();
ms.msort();
cout<<"\n\nElements after sorting are : \t";
ms.getdata();
getch();
return 0;
}