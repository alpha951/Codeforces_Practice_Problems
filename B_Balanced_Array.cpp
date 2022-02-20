typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/******************************************************************************************/
int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n / 2];
        ll b[n / 2];
        for (int i = 1; i <= n / 2; i++)
        {
            a[i - 1] = i * 2;
            b[i - 1] = 2 * i - 1;
        }
        //     for (int i = 0; i < n / 2; i++)
        //     {
        //         cout << a[i] << " ";
        //     }
        //     for (int i = 0; i < n / 2; i++)
        //     {
        //         cout << b[i] << " ";
        //     }
        //     cout << endl;
        // }
        ll sum_a = 0;
        ll sum_b = 0;
        bool check = false;
        for (int i = 0; i < n / 2; i++)
        {
            sum_a += a[i];
            sum_b += b[i];
        }

        // 2 1
        // sum_a 2
        // sum_b 1

        // 2 4 1 3
        // sum_a 6
        // sum_b 4

        // 2 4 6 1 3 5
        // sum_a 12
        // sum_b 9

        // 2 4 6 8 1 3 5 7
        // sum_a 20
        // sum_b 16

        // 2 4 6 8 10 1 3 5 7 9
        // sum_a 30
        // sum_b 25
        ll diff = 0;
        if (sum_a != sum_b)
        {
            diff = sum_b - sum_a;
            if (diff < 0 && diff % 2 == 0)
            {
                // cout << "I'm in 1st diff<0 if block" << endl;
                b[n / 2 - 1] += abs(diff);
            }
            else if (diff > 0 && diff % 2 == 0)
            {
                a[n / 2 - 1] += abs(diff);
            }
        }
        sum_a = 0;
        sum_b = 0;
        for (int i = 0; i < n / 2; i++)
        {
            sum_a += a[i];
            sum_b += b[i];
        }
        if (sum_a != sum_b)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++)
            {
                cout << a[i] << " ";
            }
            for (int i = 0; i < n / 2; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}