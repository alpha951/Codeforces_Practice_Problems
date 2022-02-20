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
    int n;
    cin >> n;
    int a[n];
    forloop(i, 0, n)
    {
        cin >> a[i];
    }
    int amazing = 0;
    int worst = a[0];
    int best = a[0];
    forloop(i, 1, n)
    {
        if (a[i] > best)
        {
            amazing++;
            best = a[i];
        }
        else if (a[i] < worst)
        {
            amazing++;
            worst = a[i];
        }
    }
    cout << amazing << endl;
    return 0;
}