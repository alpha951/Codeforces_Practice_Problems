// typedef long long int;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
/******************************************************************/
int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int m1 = INT_MAX, m2 = INT_MAX;
        forloop(i, 0, n)
        {
            cin >> a[i];
           
            m1 = min(m1, a[i]);
        }
        forloop(i, 0, n)
        {
            cin >> b[i];
            m2 = min(m2, b[i]);
        }
        

        long long int steps = 0;
        forloop(i, 0, n)
        {
            steps += max(a[i] - m1, b[i] - m2);
        }

        cout << steps << endl;
    }

    return 0;
}

// forloop(i, 0, n)
//         {
//             if (a[i] != min_a && b[i] != min_b)
//             {
//                 int diff_a = a[i] - min_a;
//                 int diff_b = b[i] - min_b;
//                 steps += abs(diff_a - diff_b);

//                 diff_a -= steps;
//                 diff_b -= steps;
//                 if (diff_a > 0)
//                 {
//                     steps += diff_a;
//                 }
//                 if (diff_b > 0)
//                 {
//                     steps += diff_b;
//                 }
//             }
//             else if (a[i] != min_a)
//             {
//                 int diff_a = a[i] - min_a;
//                 steps += diff_a;
//             }
//             else if (b[i] != min_b)
//             {
//                 int diff_b = b[i] - min_b;
//                 steps += diff_b;
//             }
//         }