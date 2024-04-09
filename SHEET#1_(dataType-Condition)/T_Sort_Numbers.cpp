#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m1, m2, m3;
    if (a >= b && a >= c)
    {
        m1 = a;
        if (b >= c)
        {
            m1 = a;
            m2 = b;
            m3 = c;
            cout << m3 << endl
                 << m2 << endl
                 << m1 << endl
                 << endl
                 << a << endl
                 << b << endl
                 << c << endl;
        }
        else
        {
            m1 = a;
            m2 = c;
            m3 = b;
            cout << m3 << endl
                 << m2 << endl
                 << m1 << endl
                 << endl
                 << a << endl
                 << b << endl
                 << c << endl;
        }
    }
    else if (b >= a && b >= c)
    {
        m1 = b;
        if (c >= a)
        {
            m1 = b;
            m2 = c;
            m3 = a;
            cout << m3 << endl
                 << m2 << endl
                 << m1 << endl
                 << endl
                 << a << endl
                 << b << endl
                 << c << endl;
        }
        else
        {
            m1 = b;
            m2 = a;
            m3 = c;
            cout << m3 << endl
                 << m2 << endl
                 << m1 << endl
                 << endl
                 << a << endl
                 << b << endl
                 << c << endl;
        }
    }
    else
    {
        m1 = c;
        if (a >= b)
        {
            m1 = c;
            m2 = a;
            m3 = b;
            cout << m3 << endl
                 << m2 << endl
                 << m1 << endl
                 << endl
                 << a << endl
                 << b << endl
                 << c<< endl;
        }
        else
        {
            m1 = c;
            m2 = b;
            m3 = a;
            cout << m3 << endl
                 << m2 << endl
                 << m1 << endl
                 << endl
                 << a << endl
                 << b << endl
                 << c << endl;
        }
    }
}