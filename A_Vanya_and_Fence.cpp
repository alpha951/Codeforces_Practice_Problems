#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int a[n];
    int w = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            w += 2;
        }
        else if (a[i] <= h)
        {
            w++;
        }
    }
    cout<<w<<endl;

    return 0;
}