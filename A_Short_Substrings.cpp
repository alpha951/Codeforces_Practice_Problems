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
        string b;
        cin >> b;
        int n = b.length();
        char a[n];
        a[0] = b[0];
        a[1] = b[1];
        int j = 2;
        for (int i = 2; i < b.length(); i++)
        {

            if (i % 2 != 0)
            {
                a[j] = b[i];
                j++;
            }
        }
        forloop(i, 0, j)
        {
            cout << a[i];
        }
        cout << endl;
    }

    return 0;
}