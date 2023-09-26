#include<iostream>
using namespace std;
//pythagors



void triangle (int a, int b,int c)
{
    if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(b*b)+(a*a))
    {
        cout<<"it is a triangle"<<endl;

    }
    else
    {
        cout<<"given sides are not of a triangle"<<endl;
    }
    return;
}



int main()
{
    int a,b,c;

    cout<<"enter three sides of a triangle ";
    cin>>a>>b>>c;

   // 
    //{

    //}

    triangle(a,b,c);

    return 0;
}