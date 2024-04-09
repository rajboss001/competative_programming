#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int y, m, d;
    if (a >= 365)
    {
        y = a / 365;
        m = (a % 365) / 30;
        d = (a - ((y * 365) + (m * 30)));
        cout << y << " years" << endl
             << m << " months" << endl
             << d << " days" << endl;
    }
    else
    {
        y = 0;
        if (a >= 30 && a < 365)
        {
            y = 0;
            m = a / 30;
            d = (a - ((y * 365) + (m * 30)));
            cout << y << " years" << endl
                 << m << " months" << endl
                 << d << " days" << endl;
        }
        else if (a < 30)
        {
            y = 0;
            m = 0;
            d = a;
            cout << y << " years" << endl
                 << m << " months" << endl
                 << d << " days" << endl;
        }
    }
}
