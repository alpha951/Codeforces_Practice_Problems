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
    int n, k;
    cin >> n >> k;
    int time = 240 - k;
    int solved = 0;
    int i = 1;
    while (time > 0)
    {

        time -= 5 * i;
        if (time >= 0 && solved <n)
        {
            solved++;
            i++;
        }
    }
    cout << solved << endl;

    return 0;
}