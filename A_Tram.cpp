#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n]; // a[] exiting passanger and b[] entering passanger
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int net_passanger = 0;
    int max_passanger = 0;
    for (int i = 0; i < n; i++)
    {
        net_passanger = net_passanger + b[i] - a[i];
        if (net_passanger > max_passanger)
        {
            max_passanger = net_passanger;
        }
    }
    cout << max_passanger << endl;
    return 0;
}