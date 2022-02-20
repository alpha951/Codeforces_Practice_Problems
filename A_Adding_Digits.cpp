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
    int a, b, n;
    cin >> a >> b >> n;
    string s = to_string(a);
    int i = 0;
    while (i < 10)
    {
        // cout << " the value of i is " << i << endl;
        string s2 = to_string(i);
        string s3 = s + s2;

        int m = stoi(s3);
        // cout << "m is " << m << endl;
        if (n == 0)
        {
            break;
        }
        else if (m % b == 0)
        {
            // cout << m << " is divided by " << b << endl;
            n--;
            s = s3;

            // cout << "ThE value of i is " << i << endl;
        }
        else
        {
            i++;
            if (i == 10)
            {
                i = 0;
            }
        }
    }
    if (n == 0)
    {
        cout << s << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}