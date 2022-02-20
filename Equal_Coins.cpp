#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int x, y;
        cin >> x >> y;
        long long int total_money = x + (2 * y);

        // if (total_money % 2 == 0 && x == 0 && y == 1)  //corner case
        // {
        //     cout << "NO" << endl;
        // }
        if (total_money % 2 == 0 && y % 2 == 0 && x == 0) //even sum with x==0
        {
            cout << "YES" << endl;
        }
        else if (total_money % 2 == 0 && x != 0)
        {
            cout << "YES" << endl;
        }
        else if (total_money % 2 != 0) //odd sum
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}