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
    int a[n];
    forloop(i, 0, n)
    {
        cin >> a[i];
    }

    int programming = 0;
    int maths = 0;
    int sports = 0;

    forloop(i, 0, n)
    {
        if (a[i] == 1)
        {
            programming++;
        }
        else if (a[i] == 2)
        {
            maths++;
        }
        else if (a[i] == 3)
        {
            sports++;
        }
    }

    int w = 0;

    while (programming != 0 && maths != 0 && sports != 0)
    {
        programming--;
        maths--;
        sports--;
        w++;
    }
    cout << w << endl;

    while (w != 0)
    {
        int program = 0;
        int math = 0;
        int sport = 0;
        forloop(i, 0, n)
        {
            if (a[i] == 1 && program == 0)
            {
                a[i] = 0;
                cout << i + 1 << " ";
                program++;
            }
            else if (a[i] == 2 && math == 0)
            {
                a[i] = 0;
                cout << i + 1 << " ";
                math++;
            }
            else if (a[i] == 3 && sport == 0)
            {
                a[i] = 0;
                cout << i + 1 << " ";
                sport++;
            }
        }
        w--;
        cout << endl;
    }

    return 0;
}
