typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0; // For index of str1 (or subsequence

    // Traverse str2 and str1, and
    // compare current character
    // of str2 with first unmatched char
    // of str1, if matched
    // then move ahead in str1
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}
/******************************************************************/
int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char t[s.size()];
        for (int i = 0; i < s.size(); i++)
        {
            cin >> t[i];
        }
        // cin >> t;
        string str = s;
        sort(str.begin(), str.end());
        int m = str.size();
        int n = str.size();
        int temp = 0;
        if (isSubSequence(t, str))
        {
            for (int i = 0; i < m; i++)
            {

                if (str[i] == t[0])
                {
                    char temp = str[i];
                    str[i] = str[n - i - 1];
                    str[n - i - 1] = temp;
                }
            }
            cout << str << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
    return 0;
}