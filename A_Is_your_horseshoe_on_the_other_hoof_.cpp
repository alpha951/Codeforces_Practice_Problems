#include <bits/stdc++.h>
using namespace std;
int main()
{

    // long long int a[4];
    // for (int i = 0; i < 4;i++){
    //     cin>>a[i];
    // }
    // int repeated_color=0;
    // for (int i = 0; i < 3; i++){
    //     for (int j = i+1; j < 4; j++){
    //         if(a[i]==a[j]){
    //             a[j]=-1;
    //             repeated_color++;
    //         }
    //     }
    // }
    // if(repeated_color<=3 && repeated_color>1){
    //     cout<<repeated_color-1;
    // }
    // else if(repeated_color==1){
    //     cout<<1;
    // }
    // else if(repeated_color>=4){
    //     cout<<3;
    // }
    // else{
    //     cout<<0;
    // }
    long long int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    long long int temp1 = s1;
    long long int temp2 = s2;
    // long long int temp3 = s3;
    // long long int temp4 = s4;
    if (s1 == temp1 && s2 == temp1 && s3 == temp1 && s4 == temp1)
    {
        cout << 3 << endl;
    }
    else if ((s1 == s2 && s3 == s4 && s1 != s3) || (s1 == s3 && s2 == s4 && s3 != s4) || (s1 == s4 && s2 == s3 && s1 != s2))
    {
        cout << 2 << endl;
    }
    else if ((s1 == temp1 && s2 == temp1 && s3 == temp1) || (s1 == temp1 && s2 == temp1 && s4 == temp1) || (s1 == temp1 && s3 == temp1 && s4 == temp1) || (s2 == temp2 && s3 == temp2 && s4 == temp2))
    {
        cout << 2 << endl;
    }
    else if ((s1 == s2) || (s1 == s3) || (s1 == s4) || (s2 == s3) || (s2 == s4) || (s3 == s4))
    { //    cout<<"fourth case"<<endl;
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
// correct approach
/*
#include <iostream>
#include <algorithm>
using namespace std;
int mas[5], e = 3;
int main() {
    for (int i = 0; i < 4; i++) {
        cin >> mas[i];
    }
    sort(mas, mas + 4);
    for (int i = 0; i < 3; i++) {
        if (mas[i] != mas[i + 1]) {
            e--;
        }
    }
    cout << e;
} */