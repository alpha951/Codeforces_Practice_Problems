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
    while (t--)
    {
        ll x, y, n;
        cin >> x >> y >> n;
        if (n % x >= y)
        {
            cout << n - n % x + y << endl;
        }
        else
        {
            cout << n + (y - n % x) - x << endl;
        }
    }

    return 0;
}

//Optimized
// void solve()
// {
//     int x,y,n;
//     cin>>x>>y>>n;
//     int v=(n-y)/x;                 
//     int p=v*x+y;
//     cout<<p<<endl;
// }

// int main()
// {
//     IOS;
//     ll t=1; cin>>t;
//     while (t--)
//     {
//         solve();
//     }
// }