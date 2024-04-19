#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int min;
    int count;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] < a[i + 1])
    //     {
    //         min = a[i];
    //         count = i + 1;
            
    //     }
    // }
    int size=(min_element(a,a+n))-a;
   
    cout << *(min_element(a,a+n)) <<" "<< (size+1)  << endl;
}