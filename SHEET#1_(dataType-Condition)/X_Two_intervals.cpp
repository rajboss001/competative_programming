#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, p, q;
    cin >> a >> b >> p >> q;
    if ((b - p) < 0)
    {
        cout << "-1" << endl;
    }
    else if (b < p && b < q)
    {
        cout << "-1" << endl;
    }
    else if (a > p && a > q)
    {
        cout << "-1" << endl;
    }
    else if(a==p && a==q){
        cout<<a<<" "<<a<<endl;
    }
    else if (p == q && (b - p) > 0 && (b - q) > 0)
    {
        cout << "-1" << endl;
    }
    else if (a > p)
    {
        if (b > q)
        {
            cout << a << " " << q << endl;
        }
        else
        {
            cout << a << " " << b << endl;
        }
    }
    
    else
    {
        if (b > q)
        {
            cout << p << " " << q << endl;
        }
        else
        {
            cout << p << " " << b << endl;
        }
    }
}