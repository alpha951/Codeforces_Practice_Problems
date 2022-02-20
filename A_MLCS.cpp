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
    int a[n];
    forloop(i, 0, n)
    {
        cin >> a[i];
    }
    int b[n];
    int j = 0;
    forloop(i, 0, n)
    {
        if ((a[i] + j + 1) == b[j - 1] + j)
        {
            
        }
    }

    return 0;
}
