#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    string s = to_string(n);
    long long int lucky_number = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '7' || s[i] == '4')
        {
            lucky_number++;
        }
    }
    long long int count=0;
    string s2 = to_string(lucky_number);
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == '4' || s2[i] == '7')
        {
            count++;
        }
    }
    if (count == s2.length())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}