typedef long long int ll;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/******************************************************************/
int count_even_digits(int n) {

	int temp, count = 0;

	// reading each digit of n
	while (n > 0) {

		temp = n % 10;	// storing rightmost digit of n in temp
		n = n / 10;		// removing rightmost digit of n

		// if temp is even, increment count
		if (temp % 2 == 0) {
			count++;
		}

	}

	return count;

}
int main()
{
    fastIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        
        // cout << "m is " << m << " for n=" << n << endl;
        cin >> n;
        int m = count_even_digits(n);
        if (n % 2 == 0)
        {
            cout << 0 << endl;
        }
        else if (n % 2 != 0 && n >= 10)
        {
            
            string s = to_string(n);

            if ((int)s[0] % 2 == 0)
            {
                cout << 1 << endl;
            }
            else if (m != 0)
            {
                cout << 2 << endl;
            }
            else if (m == 0)
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}