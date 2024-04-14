#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        
        if (max <= m)
        {
            max = m;
        }
        else{
            max=max;
        }
    }
    cout << max << endl;
}

