// typedef long long int ll;
// #define fastIO               \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);
// #define forloop(i, a, b) for (int i = a; i < b; i++)
// #include <bits/stdc++.h>
// using namespace std;
// /******************************************************************/
// int main()
// {
//     fastIO;
//     ll row, column;       //n,m
//     cin >> row >> column; // input row and column
//     int check = 1;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= column; j++)
//         {
//             if (j != column && j != 1)
//             {
//                 if (i % 2 != 0)
//                 {
//                     cout << "#";
//                 }
//                 else
//                 {
//                     cout << ".";
//                 }
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int oddness = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {

            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
        }
        else
        {
            ++oddness;
            for (int j = 0; j < m; j++)
            {
                if (oddness % 2 == 1 && j == m - 1)
                {
                    cout << "#";
                }
                else if (oddness % 2 == 0 && j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}