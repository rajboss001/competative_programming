#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<=1)
    {
        cout<<"-1"<<endl;
    }
    for(int i=2;i<=a;i+=2)
    {
         cout<<i<<endl;
    }
}