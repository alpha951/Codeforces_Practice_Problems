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
    int p, r;
    cin >> p >> r;
    int p1 = p % 10;
    int m = 1, n = 1;

    if (p % 10 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        int x = p * n - p1;
        while (1)
        {
            if ((p * m) % 10 == 0)
            {
                break;
            }
            else
            {
                m++;
            }
            if ((((p * n) % 10) == r))
            {   
                break;
            }
            else
            {
                n++;
            }
        }
        if (m < n)
        {
            cout << m << endl;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}
// (p1 * n) % r == 0 && 