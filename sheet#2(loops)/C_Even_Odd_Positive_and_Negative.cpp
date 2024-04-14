#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int ec=0,oc=0,pc=0,nc=0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(m%2==0 || m==0)
        {
            ec++;
        }
        else if(m%2!=0 )
        {
            oc++;
        }
        
        if(m>0)
        {
            pc++;
        }
        
        else if(m<0)
        {
            nc++;
        }
   
    }

    cout<<"Even: "<<ec<<endl;
    cout<<"Odd: "<<oc<<endl;
    cout<<"Positive: "<<pc<<endl;
    cout<<"Negative: "<<nc<<endl;
}