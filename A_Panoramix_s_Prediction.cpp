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
    //since 0 and 1 is not prime return false.
    if (n == 1 || n == 0)
        return false;

    //Run a loop from 2 to n-1
    for (int i = 2; i < n; i++)
    {
        // if the number is divisible by i, then n is not a prime number.
        if (n % i == 0)
            return false;
    }
    //otherwise, n is prime number.
    return true;
}
/******************************************************************/
int main()
{
    fastIO;
    int m, n;
    cin >> n >> m;
    int a[50] = {0};
    int j = 0;

    for (int i = 0; i < 50; i++)
    {

        if (isPrime(i))
        {
            a[j] = i;
            j++;
        }
    }

    int k = 0;
    for (int i = 0; i < 49; i++)
    {
        if (a[i] == n && a[i + 1] == m)
        {
            k++;
            break;
        }
    }
    if (k != 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
