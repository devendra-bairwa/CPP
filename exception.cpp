#include <iostream>
using namespace std;


#include <iostream>
using namespace std;

void f1(int a, int b)// throw(int)
{
    if (b == 0)
        throw 100;
    cout << "division is " << a / b << endl;
}

int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;

    try
    {
        f1(a, b);
    }
    catch (int i)
    {
        cout << "exception caught: division by zero" << endl;
    }

    return 0;
}