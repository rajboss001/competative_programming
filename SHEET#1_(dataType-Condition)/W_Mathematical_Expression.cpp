#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char ch1,ch2;
    int ck;
    cin>>a>>ch1>>b>>ch2>>c;
    if(ch1=='+')
    {
        ck=a+b;
        if(ck==c)
        {
            cout<< "Yes"<<endl;
        }
        else{
            cout<<ck<<endl;;

        }
    }
    else if(ch1=='-')
    {
        ck=a-b;
        if(ck==c)
        {
            cout<< "Yes"<<endl;
        }
        else{
            cout<<ck<<endl;;

        }
    }
    else if(ch1=='*')
    {
        ck=a*b;
        if(ck==c)
        {
            cout<< "Yes"<<endl;
        }
        else{
            cout<<ck<<endl;;

        }
    }
    
}