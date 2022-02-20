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
    sort(a, a + n);
    int max = a[n - 1];
    int b[n] = {0};
    forloop(i, 0, n)
    {
        b[i] = max - a[i];
    }
    int sum = 0;
    forloop(i, 0, n)
    {
        sum += b[i];
    }
    cout << sum << endl;

    return 0;
}