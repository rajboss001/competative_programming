#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // reverse(a,a+n);
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}