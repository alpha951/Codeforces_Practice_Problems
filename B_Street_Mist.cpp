#include <bits/stdc++.h>
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
    int b[n];
    for (int i = 0; i < (n - 2); i++)
    {
        b[i]=a[i]+a[i+1];
    }
    b[n - 1] = a[n - 1];
    b[n-2]=a[n-2]+b[n-1];
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}