#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int lastDigit1,lastDigit2,sum=0;

    lastDigit1=a%10;
    lastDigit2=b%10;
    sum=lastDigit1+lastDigit2;
    cout<<sum<<endl;
}