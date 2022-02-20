#include <bits/stdc++.h>
using namespace std;
int check_prime(int a)
{
    int c;
    for (c = 2; c <= a - 1; c++)

        if (a % c == 0)
            return 0;

    if (c == a)
        return 1;
}
int main()
{
    long n, x, y, a, b;
    cin >> n;
    if (n % 2 == 0)
    {
        x = n / 2;
        y = n / 2;
    }
    else if (n % 2 == 1)
    {
        x = n / 2;
        y = n - x;
    }
    a = check_prime(x);
    b = check_prime(y);
    while (a == 1 || b == 1)
    {
        x--;
        y = n - x;
        a = check_prime(x);
        b = check_prime(y);
    }

    cout << x << " " << y << "\n";
    return 0;
}