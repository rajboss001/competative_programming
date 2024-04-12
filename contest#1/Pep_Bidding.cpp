#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      ll a1=0,a2=0,p1=0,p2=0;
      int attA[n],defA[n],attP[n],defP[n];
      for(int i=0;i<n;i++)
      {
        cin>>attA[i];
        cin>>defA[i];
        cin>>attP[i];
        cin>>defP[i];
      }
      for(int i=0;i<n;i++)
      {
        a1+=attA[i];
        a2+=defA[i];
        p1+=attP[i];
        p2+=defP[i];
      }
      if(a1>p1 && a2>p2)
      {
        cout<<"A"<<endl;
      }
      else if(a1<p1 && a2<p2)
      {
        cout<< "P"<<endl;
      }
      else {
        cout<<"DRAW"<<endl;
      }

   }
   
}