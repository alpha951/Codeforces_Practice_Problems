typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/************************************************************************************************************************************************************************************************************************************************/
int main()
{
    fastIO;
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        forloop(i, 0, n)
        {
            cin >> a[i];
        }
        forloop(i, 0, n)
        {
            cin >> b[i];
        }
        // int diff[n] = {0};
        sort(a, a + n);
        sort(b, b + n);
        // cout << "sorted array a" << endl;
        // forloop(i, 0, n)
        // {
        //     cout << a[i] << " ";
        // }
        // cout<<endl;
        // cout << "array b" << endl;
        // forloop(i, 0, n)
        // {
        //     cout << b[i] << " ";
        // }
        // cout << "a[i] before " << a[0] << endl;
        int i = 0;
        while (k != 0)
        {
            if (a[i] < b[n - i-1])
            {
                int temp = a[i];
                a[i] = b[n - i-1];
                b[n - i-1] = temp;
            }

            k--;
            i++;
        }
        // cout << "a[i] after =" << a[0] << endl;
        int sum = 0;
        forloop(i, 0, n)
        {
            sum += a[i];
        }
        // cout << endl;
        cout << sum << endl;
    }

    return 0;
}
