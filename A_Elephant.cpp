#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin >> x;
    int min_step = 0;
    min_step+=x/5;
    x=x%5;
    min_step+=x/4;
    x=x%4;
    min_step+=x/3;
    x=x%3;
    min_step+=x/2;
    x=x%2;
    min_step+=x/1;
    cout<<min_step<<endl;
    
    return 0;
}