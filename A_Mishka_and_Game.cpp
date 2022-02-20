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
    int n;
    cin >> n;
    int a[n], b[n];
    forloop(i, 0, n)
    {
        cin >> a[i] >> b[i];
    }
    int mishka = 0;
    int chris = 0;
    forloop(i, 0, n)
    {
        if (a[i] > b[i])
        {
            mishka++;
        }
        else if (a[i] < b[i])
        {
            chris++;
        }
    }
    if (mishka == chris)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    else if (mishka > chris)
    {
        cout << "Mishka" << endl;
    }
    else if (mishka < chris)
    {
        cout << "Chris" << endl;
    }

    return 0;
}