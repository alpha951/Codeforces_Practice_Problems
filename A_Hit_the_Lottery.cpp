typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/******************************************************************/
int main()
{
    fastIO;
    ll n;
    cin >> n;
    ll one = 0, five = 0, ten = 0, twenty = 0, hundread = 0;
    while (n != 0)
    {
        if (n >= 100)
        {
            hundread += n / 100;
            n = n % 100;
            // cout << "executed 100" << endl;
        }
        else if (n >= 20)
        {
            twenty += n / 20;
            n = n % 20;
            // cout << "executed 20" << endl;
            // cout << "n after 20 " << n << endl;
        }
        else if (n >= 10)
        {
            ten += n / 10;
            n = n % 10;
            // cout << "executed 10" << endl;
        }
        else if (n >= 5)
        {
            five += n / 5;
            n = n % 5;
            // cout << "executed 5" << endl;
        }
        else if (n >= 1)
        {
            one ++;
            n = n - 1;
            // cout << "executed 1" << endl;
            //  cout << "n after 1 " << n << endl;
        }
    }
    cout << (hundread + twenty + ten + five + one) << endl;

    return 0;
}