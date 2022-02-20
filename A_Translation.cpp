#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length() / 2; i++)
    {
        swap(s1[i], s1[s1.length() - i - 1]);
    }
    if (s1 == s2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}