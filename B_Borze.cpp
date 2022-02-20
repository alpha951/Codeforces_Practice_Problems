typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/******************************************************************/
int main()
{ //0 as «.», 1 as «-.» and 2 as «--».
    // ASCII - 45; . 46;
    fastIO;
    string s;
    cin >> s;
    int n = s.length();
    // cout << "ASCII of " << s[0] << " is " << s[0] << endl;
    forloop(i, 0, n)
    {

        if (s[i] == 45 && s[i + 1] == 46)
        {
            cout << 1;
            i++;
        }
        else if (s[i] == 45 && s[i + 1] == 45)
        {
            cout << 2;
            i++;
        }
        else if (s[i] == 46)
        {
            cout << 0;
        }
    }

    return 0;
}