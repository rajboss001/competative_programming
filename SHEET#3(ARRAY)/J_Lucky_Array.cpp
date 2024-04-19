#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    ll count = 1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }
}