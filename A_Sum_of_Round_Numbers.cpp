typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/**************************************************************************************************************************************************************/
bool check_round(int n)
{
    bool check = false;
    if (n <= 10 && n >= 1)
    {
        check = true;
    }
    else
    {
        int a[5] = {0};
        int i = 0;
        while (n != 0)
        {
            if (n >= 10)
                a[i] = n % 10;
            else
                a[i] = n;
            i++;
            n = n / 10;
        }
        int non_zero = 0;
        forloop(i, 0, 5)
        {
            if (a[i] != 0)
            {
                non_zero++;
            }
        }
        if (non_zero <= 1)
        {
            check = true;
        }
        else
        {
            check = false;
        }
    }
    return check;
}

void printzero(int m)
{
    forloop(i, 0, m - 1)
    {
        cout << '0';
    }
}
int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 1;
        cin >> n;

        if (check_round(n))
        {
            cout << 1 << endl;
            cout << n << endl;
        }
        else
        {

            string s = to_string(n);
            int j = s.length();
            k = s.length();

            forloop(i, 0, s.length())
            {
                if (s[i] == '0')
                {
                    k--;
                }
            }
            cout << k << endl;
            forloop(i, 0, s.length())
            {
                if (s[i] != '0')
                {
                    cout << s[i];
                    printzero(j);
                    cout << " ";
                    j--;
                }
                else
                {
                    j--;
                }
            }
            cout << endl;
        }
    }

    return 0;
}