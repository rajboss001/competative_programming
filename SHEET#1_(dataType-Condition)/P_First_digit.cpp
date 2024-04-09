#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,digit;
    cin>>a;
    digit=a/1000;
    if(digit%2==0)
    {
        cout<< "EVEN"<<endl;
    }
    else{
        cout<< "ODD"<<endl;
    }
}