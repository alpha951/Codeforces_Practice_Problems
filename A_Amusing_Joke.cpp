typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
void sortString(string &str)
{
    sort(str.begin(), str.end());
}
/******************************************************************/
int main()
{
    fastIO;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string s4 = s1 + s2;
    int n = s3.length();
    int m = s4.length();
    sortString(s3);
    sortString(s4);
    if (s3 == s4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}