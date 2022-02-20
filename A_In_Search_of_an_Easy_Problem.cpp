#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s = "EASY";
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            
        {
            s = "HARD";
        }
    }
    cout << s << endl;

    return 0;
}