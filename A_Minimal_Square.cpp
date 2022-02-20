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
    forloop(i, 0, t)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        if (2 * a >= b)
        {
            cout << (2 * a) * (2 * a) << endl;
        }
        else if (2 * a < b)
        {
            cout << b * b << endl;
        }
    }

    return 0;
}