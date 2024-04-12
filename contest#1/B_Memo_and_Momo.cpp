#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if((a%c==0) && (b%c==0))
    {
        cout<<"Both"<<endl;
    }
    else if((a%c!=0) && (b%c!=0))
    {
        cout<< "No One"<<endl;
    }
    else if(a%c==0)
    {
        cout<< "Memo"<<endl;
    }
    else if(b%c==0)
    {
        cout<< "Momo"<<endl;
    }
    
    
}