typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;
/*******************************************************************************************/
int main()
{
    fastIO;
    string s;
    getline(cin, s);

    int n = s.length();
    if (n == 2)
    {
        cout << 0 << endl;
        return 0;
    }
    // cout << "n=" << n << endl;

    // cout << "s[0] " << s[0] << endl;
    // if (n >= 6)
    // {
    //     for (int i = 1; i < n; i = i + 3)
    //     {
    //         if (s[i] != s[i + 3])
    //         {
    //             ans++;
    //         }
    //     }
    // }
    char a[n];
    int length = 0;
    for (int i = 1; i < n - 1; i += 3)
    {
        a[length] = s[i];
        length++;
    }
    // for (int i = 0; i < length; i++)
    // {
    //     cout << a[i];
    // }
    sort(a, a + length);
    int distinct = 0;
    forloop(i, 0, length)
    {
        if (a[i] != a[i + 1])
        {
            distinct++;
        }
    }

    // else if (n == 3)
    //     cout << 1 << endl;
    // else
    //     cout << ans << endl;
    cout << distinct << endl;

    return 0;
}