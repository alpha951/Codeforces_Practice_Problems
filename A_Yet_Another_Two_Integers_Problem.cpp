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
        ll diff = (b - a);
        ll steps = 0;
        if (abs(diff) >= 10)
        {
            steps += abs((diff / 10));
            diff = diff - 10 * (diff / 10);
        }
        if (diff != 0)
        {
            steps++;
        }

        cout << steps << endl;
    }

    return 0;
}

// if (abs(diff) == 9)
//         {
//             steps += abs((diff / 9));
//             abs() diff = diff - 10 * (diff / 10);
//         }
//         if (abs(diff) >= 8)
//         {
//             steps += abs((diff / 10));
//             diff = diff - 10 * (diff / 10);
//         }
//         if (abs(diff) >= 7)
//         {
//             steps += abs((diff / 10));
//             diff = diff - 10 * (diff / 10);
//         }
//         if (abs(diff) >= 6)
//         {
//             steps += abs((diff / 10));
//             diff = diff - 10 * (diff / 10);
//         }
//         if (abs(diff) == 5)
//         {
//             steps += abs((diff / 10));
//             diff = diff - 10 * (diff / 10);
//         }
//         if (abs(diff) >= 4)
//         {
//             steps += abs((diff / 10));
//             diff = diff - 10 * (diff / abs(diff)
//         }
//         if (abs(diff) >= 3)
//         {
//             steps += abs((diff / 10));
//             diff = diff - 10 * (diff / 10);
//         }
//         if (abs(diff) >= 2)
//         {
//             steps += abs((diff / 10));
//             diff = diff - 10 * (diff / 10);
//         }
//         if (abs(diff) >= 1)
//         {
//             steps += abs((diff / 10));
//             diff = diff - 10 * (diff / 10);
//         }