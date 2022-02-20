typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/*********************************************************************************************************************************************/
int main()
{
    fastIO;
    ll t;
    cin >> t;
    forloop(i, 0, t)
    {
        char a[26];
        forloop(i, 0, 26)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        int a2[s.length()] = {0};
        forloop(i, 0, s.length())
        {
            forloop(j, 0, 26)
            {
                if (s[j] == s[i])
                {
                    a2[i] = ++j;
                    break;
                }
            }
        }
        int time = 0;
        forloop(i, 0, s.length())
        {
            time += abs(a2[i] - a2[i + 1]);
        }
        cout << time << endl;
    }

    return 0;
}

// ll t;
//     cin >> t;
//     forloop(i, 0, t)
//     {
//         string s1, s2;
//         cin >> s1 >> s2;
//         int a[s2.length()] = {0};
//         forloop(i, 0, s2.length())
//         {
//             forloop(j, 0, s1.length())
//             {
//                 if (s1[i] == s2[j])
//                 {
//                     a[i] = ++j;
//                     cout << "j=" << j << endl;
//                     break;
//                 }
//             }
//         }
//         int time = 0;
//         forloop(i, 0, s2.length())
//         {
//             time += abs(a[i] - a[i + 1]);
//         }
//         cout << time << endl;
//     }