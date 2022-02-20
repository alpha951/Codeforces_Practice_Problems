#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q;
    cin >> n;
    cin >> p;
    int x[p];
    for (int i = 0; i < p; i++)
    {
        cin >> x[i];
    }
    cin >> q;
    int y[q];
    for (int i = 0; i < q; i++)
    {
        cin >> y[i];
    }

    int xy[p + q] = {0};
    for (int i = 0; i < p + q; i++)
    {
        if (i < p)
            xy[i] = x[i];

        else if (i >= p && i < (p + q))
        {
            xy[i] = y[i - p];
        }
    }

    for (int i = 0; i < (p + q); i++)
    {
        for (int j = i + 1; j < (q + p); j++)
        {
            if (xy[i] == xy[j])
            {
                xy[j] = 0;
            }
        }
    }
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < (p + q); i++)
    {
        sum2 += xy[i];
    }

    if (sum1 == sum2)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
