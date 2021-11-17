// Very good question [& I cheated / discussed with other]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int operation = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 1)
            {
                operation++;
            }
        }
        cout << operation / 2 << endl;
    }

    return 0;
}