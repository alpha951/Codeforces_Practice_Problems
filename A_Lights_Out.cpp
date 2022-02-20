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
/*****************************************************************************************************/
int main()
{
    fastIO;
    int a[3], b[3], c[3];
    int sum_1 = 0, sum_2 = 0, sum_3 = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        sum_1 += a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
        sum_2 += a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
        sum_3 += a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        if (b[i] % 2 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        if (c[i] % 2 == 0)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }

    return 0;
}