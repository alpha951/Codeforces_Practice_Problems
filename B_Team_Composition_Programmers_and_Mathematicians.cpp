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
    int t;
    cin >> t;
    forloop(i, 0, t)
    {
        int a, b; //cp,math
        cin >> a >> b;
        int team = 0;
        int sum = a + b;
        team = sum / 4;

        if (a >= sum / 4 && b >= sum / 4)
        {
            team = team;
        }
        else if (a <= sum / 4 && b >= sum / 4)
        {
            team = a;
        }
        else if (a >= sum / 4 && b <= sum / 4)
        {
            team = b;
        }
        cout << team << endl;
    }

    return 0;
}