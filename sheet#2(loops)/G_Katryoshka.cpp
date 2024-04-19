#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll min;
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else if (c < a && c < b)
    {
        min = c;
    }

    ll a1 = (a - min)/2;;
    ll b1 = b - min;
    ll c1 = c - min;
    if(a1<c1)
    {
        cout<<(a1+min)<<endl;
        
    }
    
    
    else 
    {
        cout<<(c1+min)<<endl;
    }

}