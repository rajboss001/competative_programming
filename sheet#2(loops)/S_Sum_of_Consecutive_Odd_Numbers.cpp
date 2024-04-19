#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        int b;
        cin>>a>>b;
        int sum = 0;
        if(a<b){
            for(int i=a+1;i<b;i++)
        {
            if(i % 2 !=0 ){
                sum+=i;
            }
            
        }
        cout<<sum<<endl;

        }
        else if(a>b){
            for(int i=b+1;i<a;i++)
        {
            if(i % 2 !=0 ){
                sum+=i;
            }
            
        }
        cout<<sum<<endl;
        }
        else {
            cout<<"0"<<endl;
        }
        
    }
}