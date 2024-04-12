#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(((a-b)>=2) || ((b-a)>=2) )
    {
        cout<<"NO"<<endl;
    }
    else if(a==0 && b==0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}