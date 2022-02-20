typedef long long int ll;

#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
#define vector <int> vi;
#define vectorpair <int, int> pi;
using namespace std;
/******************************************************************/
int main()
{
    fastIO;
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int j = 1, ans = 0;
    int temp = d;
    while (d != 0)
    {
        if (j % k != 0 && j % l != 0 && j % m != 0 && j % n != 0)
        {
            ans++;
        }
        j++;
        d--;
    }
    cout << temp - ans;
    return 0;
}