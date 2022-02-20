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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    // forloop(i,0,3){
    //     cout<<a[i]<<" ";
    // }
    int distance= a[1]-a[0]  + a[2]-a[1];
    cout<<distance<<endl;

    return 0;
}