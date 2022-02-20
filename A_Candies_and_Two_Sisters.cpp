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
        ll n;
        cin >> n;
        ll a, b; //a>b;
        ll ans = 0;
        if (n > 2)
        {
            if (n % 2 != 0)
            {
                b = (n - 1) / 2;
                ans = b;
            }
            else if (n % 2 == 0)
            {
                b = (n / 2) - 1;
                ans = b;
            }
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}