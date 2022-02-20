#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s1 = "I love", s2 = "I hate";
    string s3 = " that ", s4 = " it";
    string s5 = "\0";
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            s5 += s2 + s3;
        }
        else
        {
            s5 += s1 + s3;
        }
    }
    if (n % 2 == 0)
    {
        s5 += s1 + s4;
    }
    else
    {
        s5 += s2 + s4;
    }
    cout << s5 << endl;

    return 0;
}