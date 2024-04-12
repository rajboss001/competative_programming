#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int a;
    cin>>a;
    int d1,d2;
    d1=a%10;
    d2=a/10;
    if((d1%d2==0) || (d2%d1==0))
    {
        cout<< "YES"<<endl;
    }
    else {
        cout<< "NO"<<endl;
    }
}