// typedef long long int int;
#define fastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define forloop(i, a, b) for (int i = a; i < b; i++)
#include <bits/stdc++.h>
using namespace std;
/******************************************************************/
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<4<<" "<<n-4<<endl;
    }
    else{
        cout<<9<<" "<<n-9<<endl;
    }
}