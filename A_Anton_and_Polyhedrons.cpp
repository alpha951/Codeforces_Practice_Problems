typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/******************************************************************/
int main()
{
    fastIO;
    ll n;
    cin >> n;
    string s[n];
    ll face = 0;
    forloop(i, 0, n)
    {
        cin >> s[i];
        if (s[i] == "Tetrahedron")
        {
            face += 4;
        }
        else if (s[i] == "Cube")
        {
            face += 6;
        }
        else if (s[i] == "Octahedron")
        {
            face += 8;
        }
        else if (s[i] == "Dodecahedron")
        {
            face += 12;
        }
        else if (s[i] == "Icosahedron")
        {
            face += 20;
        }
    }
    cout << face << endl;
    return 0;
}