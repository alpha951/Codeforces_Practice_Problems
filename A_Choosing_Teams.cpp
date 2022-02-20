typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/******************************************************************/
int main()
{
    fastIO;
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int a[n];
    forloop(i, 0, n)
    {
        cin >> a[i];
    }
    int left[n] = {0};
    forloop(i, 0, n)
    {
        left[i] = 5 - a[i];
    }
    int eligible = 0;
    forloop(i, 0, n)
    {
        if (left[i] >= k)
        {
            eligible++;
        }
    }
    cout << eligible / 3 << endl;

    return 0;
}