typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/*****************************************************************************************************************/
int main()
{
    fastIO;
    ll n;
    cin >> n;
    ll a[n];
    forloop(i, 0, n)
    {
        cin >> a[i];
    }
    int time = 0;
    // ll temp[n] = {0};
    // forloop(i, 0, n)
    // {
    //     temp[i] = a[i];
    // }
    // sort(temp, temp + n);
    // ll max = temp[n];
    // ll min = temp[0];
    // int maxIndex = 0;
    // int minIndex = 0;
    // forloop(i, 0, n)
    // {
    //     if (a[i] == max)
    //     {
    //         maxIndex = i;
    //     }
    //     if (a[i] == min)
    //     {
    //         minIndex = i;
    //     }
    // }
    // time=maxIndex;
    // swap(a[0],a[maxIndex]);
    // forloop(i, 0, n){
    //     if(a[i])
    // }
    ll max = a[0];
    ll min = a[n - 1];
    int max_swap = 0;
    int min_swap = n - 1;
    forloop(i, 0, n)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_swap = i;
        }
    }
    for (int i = n - 1; i >= 0; i--)

    {
        if (a[i] < min)
        {
            min = a[i];
            min_swap = i;
        }
    }
    // forloop(i, 0, n)
    // {
    //     cout << a[i] << " ";
    // }
    if (max_swap < min_swap)
    {
        cout << max_swap + (n - 1 - min_swap) << endl;
    }
    else
    {
        cout << max_swap + (n - 1 - min_swap) - 1 << endl;
    }

    return 0;
}