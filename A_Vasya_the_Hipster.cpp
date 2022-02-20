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
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    cout << c << " ";
    int d = max(a, b) - c;
    cout << d / 2;
    return 0;
}