// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll n, m, result = 0;
//     cin >> n;
//     if (n == 0)
//         cout << '0' << endl;
    
//     ll digit;
//     if(n>0){
//         cin >> m;
//         while (m != 0)
//     {

//         digit = m % 10;
//         result += digit;
//         m = m / 10;
//     }
//     cout << result << endl;
//     }
    
// }

#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int sum=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        sum+=s[i]-'0';
    }
    cout<<sum<<endl;
}