#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] < s[j + 1]) //
            {
                swap(s[j], s[j + 1]);
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}