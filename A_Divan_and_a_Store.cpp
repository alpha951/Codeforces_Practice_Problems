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
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;
        int a[n];
        forloop(i, 0, n)
        {
            cin >> a[i];
        }
        int choc = 0;
        int cost = 0;
        sort(a,a+n);

        forloop(i, 0, n)
        {
            if (a[i] >= l && a[i] <= r && cost <= k)
            {

                cost += a[i];
                if (cost <= k)
                {
                    choc++;
                }
            }
        }
        cout << choc << endl;
    }

    return 0;
}