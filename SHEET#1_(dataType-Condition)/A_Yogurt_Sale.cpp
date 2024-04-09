// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         long long int a,b,c;
//         cin>>a>>b>>c;
//         long long int cost;
//         long long int b1=b*2;
//         if(b1>c)
//         {
//             cost=ceil(a*((float)c)/2);
//             cout<<cost<<endl;
//         }
//         else{
//             cout<<(a*b)<<endl;
//         }

//     }
// }


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int cost;
        long long int b1 = b * 2;
        if (b1 > c) {
            cost = ceil(a * static_cast<float>(c) / 2);
            cout << cost << endl;
        } else {
            cout << (a * b) << endl;
        }
    }
    return 0;
}
