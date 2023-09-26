#include<iostream>
#include <cmath>
using namespace std;
//square root
int square(int x)
{
  for(int i=1;i<=x;i++)
  {
     cout<<i*i<<" "; 
  }
  return 0;
}

int main()
{
int n;
cin>>n;
square(n);

return 0;
}