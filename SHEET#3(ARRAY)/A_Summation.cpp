#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

    }
    if(sum<0)
    {
        
        cout<<abs(sum)<<endl;
    }
    else{
        cout<<sum<<endl;
    }


}