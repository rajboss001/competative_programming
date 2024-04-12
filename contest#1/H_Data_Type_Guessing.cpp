#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    double  result = (a * b) % c;
    ll res2 = (a * b) / c;
    double res3 =  result -res2;
    if (result!=0)
    {
        cout << "double" << endl;
    }
    else if (res2  <= 2147483647 )
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }
    
}