#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    while ((a * b) > 0)

    {
        int sum = 0;
        if (a < b)
        {
            for (int i = a; i <= b; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
            cin >> a >> b;
        }

        else if (a == 0 || b == 0)
        {
            break;
        }
        else
        {
            for (int i = b; i <= a; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
            cin >> a >> b;
        }
    }
}