// typedef long long int ll;
// typedef vector<int> vi;
// // typedef pair<int,int> pi;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
#include <string>
using namespace std;
/******************************************************************************************/
int main()
{ //the sum only contains numbers 1, 2 and 3
    fastIO;
    string s;
    cin >> s;
    int n = s.length();
    int one = 0;
    int two = 0;
    int three = 0;
    forloop(i, 0, n)
    {
        if (s[i] == '1')
        {
            one++;
        }
        if (s[i] == '2')
        {
            two++;
        }
        if (s[i] == '3')
        {
            three++;
        }
    }
    char s1[n] = {'\0'};

    int i = 0;
    // cout<<"one="<<one<<endl;
    while (one != 0)
    {
        s1[i] = '1';
        i++;
        s1[i] = '+';
        i++;
        one--;
    }
    // cout << "i=" << i << endl;
    // cout << "one=" << one << endl;
    while (two != 0)
    {
        s1[i] = '2';
        i++;
        s1[i] = '+';
        i++;
        two--;
    }
    while (three != 0)
    {
        s1[i] = '3';
        i++;
        s1[i] = '+';
        i++;
        three--;
    }

    // s1[i] = " ";
    // cout << "i=" << i << endl;

    forloop(j, 0, n)
    {
        cout << s1[j];
    }

    return 0;
}