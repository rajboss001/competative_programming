#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll count1=0;
    ll count2=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count1++;
        }
        else{
            count2--;
        }
    }
    if(count1>0){
        cout<<"NO"<<endl;
    }
    else if(count2<=0){
        cout<<"YES"<<endl;
    }
}