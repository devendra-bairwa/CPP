#include <iostream>
using namespace std;
/*
123
123
123

int main()
{
    int n;
    cout<<"enter "<<endl;
    cin>>n;

    for(int r=1;r<=n;r++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;


}*/

/*
123
456
789

int main()
{
    int n;
    cin>>n;
int count=0;

    for(int r=0;r<n;r++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<count+1;
            count++;
        }

        cout<<endl;
    }
    return 0;
}*/

/*
*
**
***
****


int main()
{
    int n;
    cin>>n;


    for(int r=0;r<=n;r++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}*/

/*
1
22
333
4444


int main()
{
    int n;
    cin>>n;


    for(int r=0;r<=n;r++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<r;
        }
        cout<<endl;

    }

    return 0;
}
*/

/*
1
23
456



int main()
{
    int n;
    cin>>n;

    int count=0;
    for(int r=0;r<=n;r++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<count+1;
            count++;
        }
        cout<<endl;

    }

    return 0;
}*/

/*
1
12
123
1234



int main()
{
    int n;
    cin>>n;


    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<r;c++)
        {
            cout<<c;
        }
        cout<<endl;

    }

    return 0;
}*/

/*
1
21
321
4321



int main()
{
    int n;
    cin>>n;


    for(int r=0;r<=n;r++)
    {
        for(int c=0;c<=r;c++)
        {
            cout<<r-c+1;
        }
        cout<<endl;

    }

    return 0;
}*/

/*
AAA
BBB
CCC


int main()
{
    int n;
    cin>>n;


    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=n;c++)
        {
            cout<<char('A'+r-1);
        }
        cout<<endl;

    }

    return 0;
}
*/

/*
ABC
ABC
ABC


int main()
{
    int n;
    cin>>n;


    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=n;c++)
        {
            cout<<char('A'+c-1);
        }
        cout<<endl;

    }

    return 0;
}
*/

/*
ABC
DEF
GHI


int main()
{
    int n,c,r,count=0;
    cin>>n;


    for( r=1;r<=n;r++)
    {
        for( c=1;c<=n;c++)
        {
            cout<<char('A'+count);
            count++;
        }
        cout<<endl;


    }

    return 0;
}*/

/*
ABC
BCD
CDE


int main()
{
    int n,c,r,count=0;
    cin>>n;


    for( r=1;r<=n;r++)
    {
        for( c=1;c<=n;c++)
        {
            cout<<char('A'+count);
            count++;
        }

        cout<<endl;
        count=r;


    }

    return 0;
}
*/

/*
A
BB
CCC


int main()
{
    int n;
    cin>>n;


    for(int r=0;r<=n;r++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<char('A'+r-1);
        }
        cout<<endl;

    }

    return 0;
}*/

/*
A
BC
DEF
GHIJ



int main()
{
    int n,count=0;
    cin>>n;


    for(int r=0;r<=n;r++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<char('A'+count);
            count++;
        }
        cout<<endl;

    }

    return 0;
}
*/

/*
A
BC
CDE
DEFG


int main()
{
    int n;
    cin>>n;


    for(int r=1;r<=n;r++)
    {
        for(int j=1;j<=r;j++)
        {
            cout<<char('A'+r+j-2);

        }

        cout<<endl;

    }

    return 0;
}*/

/*
D
CD
BCD
ABCD


int main()
{
    int n, r, j;

    cin >> n;

    
    for (r = 1; r <= n; r++)

    {
        char k = 'A' + n - r;
        for (j = 1; j <= r; j++)
        {
            cout << k;
            k++;
        }

        cout << endl;
    }

    return 0;
}*/

/*
    *
   **
  ***
 ****
*****


int main() {
    int n;
    cin >> n;

    for (int r = 1; r <= n; r++) {
        for (int j = 1; j <= n - r; j++)
         {
            cout << " ";
        }
        for (int k = 1; k <= r; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}*/

