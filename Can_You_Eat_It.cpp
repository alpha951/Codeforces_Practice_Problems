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
        int n;
        cin >> n;
        int k;
        cin >> k;
        int bite = 0;
        bite = n;
        // k = k - 1;
        // if (n == 0)
        // {
        //     cout << 0 << endl;
        // }

        // else if (k <= 0)
        // {
        //     cout << bite << endl;
        // }
        // else
        // {
        //     cout << -1 << endl;
        // }
        if (n == 0)
        {
            cout << n << endl;
        }
        else if (n > 1 && k <= 1)
        {
            cout << n << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}