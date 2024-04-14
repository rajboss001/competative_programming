#include <bits/stdc++.h>
#define ll long long
using namespace std;

int prime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return -1;
        }
    }
    return n;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        int res = prime(i);
        if (res != -1)
        {
            cout << res << " ";
        }
    }
    return 0;
}
