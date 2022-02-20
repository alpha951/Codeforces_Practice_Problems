#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p[n], q[n];  // (pi ≤ qi)
    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(q[i]-p[i]>=2){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}