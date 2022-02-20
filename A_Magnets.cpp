#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int output = 0;
    // cout<<s[0]<<" "<<endl;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i][1] == s[i + 1][0])
        {

            output++;
        }
    }
    cout << output+1 << endl;

    return 0;
}
