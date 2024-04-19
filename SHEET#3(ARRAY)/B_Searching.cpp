#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b;
    cin >> b;
    int count;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            count = i;
            break;
        }
        else
        {
            count = -1;
        }
    }
    cout << count << endl;
}