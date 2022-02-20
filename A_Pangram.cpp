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
    int m;
    cin >> m;
    string s;
    cin >> s;
    int n = s.length();

    bool check = true;
    int a = 65;
    int not_present = 0;
    for (int i = 65; i < 91; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {

            if (int(s[j]) == i || int(s[j]) == i + 32)
            {

                break;
            }
        }

        if (j >= n)
        {
            cout << "NO" << endl;
            return 0;
            break;
        }
    }
    // cout << "a=" << a << endl;
    // cout << "ascii=" << s[0] << endl;

    cout << "YES" << endl;

    return 0;
}