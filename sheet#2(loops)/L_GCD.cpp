// #include<bits/stdc++.h>
// #define ll long long 
// using namespace std;
// int main()
// {
//     int a,b,rem;
//     cin>>a>>b;
//     while(b!=0)
//     {
//         rem=a%b;
//         a=b;
//         b=rem;
//     }
//     cout<<a<<endl;
// }

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int f1=0,f2=1,sum,n;

    cin>>n;
    if(n==0)
    {
       cout<<f1<<endl;   
    }
    else if(n==1)
    {
        cout<<f1<<" "<<f2;
    }
    else{
        while(n--)
        {
            cout<<f1<<" ";
            sum=f1+f2;
            f1=f2;
            f2=sum;
            
        }
    }
}