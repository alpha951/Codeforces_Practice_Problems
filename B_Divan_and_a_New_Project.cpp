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
        int a[n];
        forloop(i, 0, n)
        {
            cin >> a[i];
        }
        int Tmin = 0;
        int b[n] = {0};
        sort(a, a + n);
        b[0] = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (i % 2 != 0)
                b[n - 1 - i] = (i);
            else if (i % 2 == 0)
                b[n - 1 - i] = -1 * (i);
        }

        for (int i = 1; i < n; i++)
        {
            Tmin += abs(b[i]) * 2 * a[i - 1];
        }
        cout << Tmin << endl;
        forloop(i, 0, n)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}