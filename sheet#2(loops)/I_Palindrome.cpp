#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0;
    int ram;
    int q=n;
    while(q!=0)
    {
        
        ram=q%10;
        res=res*10+ram;
        q=q/10;
        
    }
    if(n==res)
    {
        cout<<res<<endl<<"YES"<<endl;
    }
    else{
        cout<<res<<endl<<"NO"<<endl;
    }
}