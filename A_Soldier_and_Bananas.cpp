#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k, n, w;
    cin >> k >> n >> w;
    long long int output = 0;
    long long int total_bill = 0;
    int i = 1;
    while (w != 0)
    {

        total_bill = total_bill + i * k;

        --w;

        ++i;
    }
    if (total_bill >= n)
    {
        output = total_bill - n;
    }
    cout << output;

    return 0;
}