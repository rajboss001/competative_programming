#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll f1 = 0, f2 = 1, sum = 0;
    ll n;
    cin >> n;
    if(n==1)cout<<"0"<<endl;
    else if(n==2)cout<<"1"<<endl;
    else{
        for(int i=3;i<=n;i++)
        {
            sum=f1+f2;
            f1=f2;
            f2=sum;
        }cout<<sum<<endl;
    }
    
}