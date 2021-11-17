#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1;
    cin >> s1; //pezu
    int distinct_letters = 1;
    // cout << s1.length() << endl;
    for (int i = 0; i < s1.length()-1; i++)     // i<=2
    {
        int repeat = 0;
        for (int j = i+1; j < s1.length(); j++)  //i<=3
        {
            if (s1[i] == s1[j] && s1[i]!='0')   // 
            {
                repeat++;
                s1[j]='0';
            }
        }

        if (repeat == 0)
        { //sure
            distinct_letters++;
        }
    }

    if (distinct_letters % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else if (distinct_letters % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int n = s.length();
//     int q = 0;     //repeat_sum
//     for(int i=0;i<n;i++)
//     {
//         int p=0;    //repeat
//         if(s[i]!=-1)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 if(s[i]==s[j])
//                 {
//                     p++;
//                     s[j]=-1;
//                 }
//             }
//         }
//         q = q+p;
//     }
//     // cout<<n-q;
//      if ((n-q) % 2 == 0)
//     {
//         cout << "CHAT WITH HER!" << endl;
//     }
//     else if ((n-q) % 2 != 0)
//     {
//         cout << "IGNORE HIM!" << endl;
//     }
// }