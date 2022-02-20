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
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i] >> arr2[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j] and i != j)
                ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
//  #include<iostream>
//    using namespace std;

//    int main()
//    {
//         int n,j,i,cn=0;
//         cin>>n;
//         int a[n],b[n];

//         for ( i=0; i<n; i++) cin>>a[i]>>b[i];

//         for (i=0; i<n; i++ )
//             for( j=0; j<n; j++)
//         {
//              if ( i!=j && a[i]==b[j]) cn++;
//         }

//         cout<<cn<<endl;

//         return 0;

//    }
