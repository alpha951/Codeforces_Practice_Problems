#include <bits/stdc++.h>
using namespace std;
bool repeated_digit(int n)
{
    bool flag = false;
    string s = to_string(n);
    for (int i = 0; i < s.length() - 1; i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                flag = true;
            }
        }
    }
    return flag;
}
int main()
{
    int y;
    cin >> y;
    int ans;
    bool flag = true;
    while (flag)
    {
        y++;
        flag = repeated_digit(y);
    }
    cout << y << endl;
    return 0;
}