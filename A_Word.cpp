#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int lowercase = 0;
    int uppercase = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97)
        {
            lowercase++;
        }
        else if (s[i] <= 90)
        {
            uppercase++;
        }
    }
    if (lowercase >= uppercase)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] <= 90)
            {
                s[i] += 32;
            }
        }
    }
    if (uppercase > lowercase)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97)
            {
                s[i] -= 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}