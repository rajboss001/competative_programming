#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   if((a+b*c)==d){
    cout<<"YES"<<endl;
   }
   
   else if((a+b-c)==d){
    cout<<"YES"<<endl;
   }
   else if((a*b+c)==d){
    cout<<"YES"<<endl;
   }
   else if((a*b-c)==d){
    cout<<"YES"<<endl;
   }
   else if((a-b+c)==d){
    cout<<"YES"<<endl;
   }
   else if((a-b*c)==d){
    cout<<"YES"<<endl;
   }
   else{
    cout<< "NO"<<endl;
   }
   
}