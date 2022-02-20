typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
//LCM(a, b) = (a x b) / GCD(a,b)
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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a, b, c;
        a = n - 3;
        b = 2;
        c = 1;
        while (1)
        {

            if (gcd(a, b) == c)
            {
                cout << a << " " << b << " " << c << endl;
                break;
            }

            a -= 2;
            b++;
            c++;
        }
    }
    return 0;
}