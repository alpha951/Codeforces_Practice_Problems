#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    long double ans = ((float)sum) / n;
    // std::cout << std::setprecision(14);
    cout << fixed << setprecision(12) << ans;

    return 0;
}