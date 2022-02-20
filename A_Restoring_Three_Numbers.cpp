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
    long long int a[4];
    forloop(i, 0, 4)
    {
        cin >> a[i];
    }

    sort(a, a + 4);
    ll max = a[3];
    ll c = max - a[0];
    ll a1 = a[1]- c;
    ll b = a[2] - c;
    cout << a1 << " " << b << " " << c << endl;

    return 0;
}