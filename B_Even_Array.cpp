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
        int even_wrong = 0;
        int odd_wrong = 0;
        // int b[n] = {0};
        // int one = 0;

        forloop(i, 0, n)
        {
            if (i % 2 == 0 && a[i] % 2 != 0)
            {
                even_wrong++;
            }
            else if (i % 2 != 0 && a[i] % 2 == 0)
            {
                odd_wrong++;
            }
        }
        if (even_wrong == odd_wrong)
        {
            cout << even_wrong << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}