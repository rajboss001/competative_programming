#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    reverse(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            count++;
        }
        else
        {
            count = 0;
        }
    }
    if (count == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
