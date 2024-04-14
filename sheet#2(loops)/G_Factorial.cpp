#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll mul=1;
        if(n==0){
            cout<<"1"<<endl;
        }
        else{
            for(int i=1;i<=n;i++)
        {
            mul*=i;
        }
        cout<<mul<<endl;

        }
        
        
    }
}