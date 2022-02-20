typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/*******************************************************************************/
int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int wrong = 0;
        int i = 0;

        forloop(i, 0, n)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j] && j != (i + 1) && j != (i - 1))
                {
                    wrong++;
                }
            }
        }

        if (wrong == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}