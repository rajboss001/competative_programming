#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int result;
    char ch;
    cin>>a>>ch>>b;
    if(ch=='+')
    {
        result=a+b;
        cout<<result<<endl;

    }
     else if(ch=='-')
    {
        result=a-b;
        cout<<result<<endl;

    }
    else if(ch=='*')
    {
        result=a*b;
        cout<<result<<endl;

    }
    else if(ch=='/')
    {
        result=a/b;
        cout<<result<<endl;

    }

    
    
}