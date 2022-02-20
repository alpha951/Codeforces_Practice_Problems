// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int arr[3];
//         cin >> arr[0] >> arr[1] >> arr[2];
//         sort(arr, arr + 3);

// while ((arr[0] + arr[2] - 2 * arr[1]) > 1)
// {
//     arr[1]++;
//     arr[2]--;
// }
// while ((-arr[0] - arr[2] + 2 * arr[1]) > 1)
// {
//     arr[2]++;
//     arr[1]--;
// }
//         if (abs(arr[0] + arr[2] - 2 * arr[1]) == 0)
//         {
//             cout << "0"
//                  << "\n";
//         }
//         else if (abs(arr[0] + arr[2] - 2 * arr[1]) == 1)
//         {
//             cout << "1"
//                  << "\n";
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a1, a2, a3;
        ll ans = 0;
        ll mean = 0;

        cin >> a1 >> a2 >> a3;

        mean = (a1 + a3 + a2) % 3;

        if (mean == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}