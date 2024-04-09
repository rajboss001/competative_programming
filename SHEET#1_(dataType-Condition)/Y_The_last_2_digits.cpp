#include <bits/stdc++.h>
using namespace std;
int main()
{
    //formula ((A%100)(B%100)(C%100)(D%100))%100

    //bcz if we use (a*b*c*d)%100 then there is storage problem for worst case;


    //like all the value are 10^9 then (a*b*c*d)=10^36 which cannot hold any data type thats why we have to use the above formula 
    long long  a, b, c, d, mul;
    long long int digit;
    cin >> a >> b >> c >> d;
    mul=(a%100)*(b%100)*(c%100)*(d%100);
    digit=mul%100;
    if(digit<10)
    {
        cout<<"0"<<digit<<endl;
    }
    else{
        cout<<digit<<endl;
    }
    
}