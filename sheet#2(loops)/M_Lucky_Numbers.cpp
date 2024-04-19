#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b;
    cin >> a >> b;
    ll gcd, lcd, rem;
    while (rem != 0)
    {
        for (int i = a; i <= b; i++)
        {
            rem = a % b;
            if (rem > 0)
            {
                a = b;
                b = rem;
            }
            else
            {
                cout<<rem<<endl;
                break;
            }
        }
    }
}