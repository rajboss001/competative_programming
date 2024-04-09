#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if(a>=48 && a<=57)
    {
        cout<< "IS DIGIT"<<endl;
    }
    else if(a>64 && a<91)
    {
        cout<< "ALPHA\nIS CAPITAL"<<endl;
    }
    else if(a>96 && a<123)
    {
        cout<< "ALPHA\nIS SMALL"<<endl;
    }
}