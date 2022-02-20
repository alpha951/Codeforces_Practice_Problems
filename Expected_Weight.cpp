typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/******************************************************************/
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        int sum[n] = {0};
        int sum_of_n = n * (n + 1) / 2;
        forloop(i, 0, n)
        {
            sum[i] = (i + 1) * sum_of_n;
        }
    }

    return 0;
}