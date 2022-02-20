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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np; // k bottles
    //Each bottle has l milliliters of the drink.
    //c limes and cut each of them into d slices.
    //they found p grams of salt.
    //each friend needs nl milliliters of the drink, a slice of lime and np grams of salt
    int toast = 0;
    int total_drink = l * k;
    int total_slice = c * d;
    int possible_drink = total_drink / nl;
    int possible_salt = p / np;
    int min_toast = min(possible_drink, possible_salt);
    min_toast = min(min_toast, total_slice);
    cout << min_toast / n;

    return 0;
}