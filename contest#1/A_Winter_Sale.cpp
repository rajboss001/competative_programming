#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b;
    cin>>a>>b;
    double price;
    price = b / (1 - (float)a / 100);
    cout<<fixed<<setprecision(2)<<price<<endl;
}