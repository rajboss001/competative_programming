#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max=a[0];
    int min=a[0];
    int maxInd,minInd;
    
    for (int i = 1; i < n; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            minInd=i;
        }
        if(a[i]>max)
        {
            max=a[i];
            maxInd=i;
        }

    }
   



    for (int i = 0; i < n; i++)
    {
         a[minInd]=max;
        a[maxInd]=min;
    

        cout << a[i] << " ";
    }
}