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
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int crime = 0;
    int recruited = 0;
    int untreated = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            crime++;
            if (recruited < 1)
            {
                untreated++;
            }
            else
            {
                recruited--;
            }
        }
        else if (a[i] > 0)
        {
            recruited += a[i];
        }
    }
    cout << untreated << endl;

    return 0;
}