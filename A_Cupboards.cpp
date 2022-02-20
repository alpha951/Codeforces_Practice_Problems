typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
/******************************************************************/
int main()
{
    fastIO;
    int n;
    cin >> n;

    int l_open = 0;
    int r_open = 0;
    int l_closed = 0;
    int r_closed = 0;
    int t = n;

    while (t--)
    {
        int l, r;
        //  Number li equals one, if the left door of the i-th cupboard is opened, otherwise number li equals zero.
        cin >> l >> r;

        if (l == 0)
        {
            l_closed++;
        }
        else
        {
            l_open++;
        }
        if (r == 0)
        {
            r_closed++;
        }
        else
        {
            r_open++;
        }
    }
    int ans = min(l_open, l_closed); // choosing the min one so least time will be taken to perform the action
    ans += min(r_open, r_closed);
    cout << ans << endl;

    return 0;
}