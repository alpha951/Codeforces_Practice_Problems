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
    ll t;
    cin >> t;
    forloop(i, 0, t)
    {
        ll a, b;
        cin >> a >> b;
        ll step = 0;

        // while (a % b != 0)
        // {
        //     a++;
        //     step = step + 1;
        // }
        // cout << step << endl;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll c = a / b;
            step = b*(c + 1) - a;
            cout << step << endl;
        }
    }

    return 0;
}