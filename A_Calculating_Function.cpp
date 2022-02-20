#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    long long int n;
    cin >> n;
    long long int sum=0;
    //f(n) =  - 1 + 2 - 3 + .. + (( - 1)pow(n))*n
    // long long int sum = 0;
    // while (n != 0)
    // {
    //     long long int term = 1;
    //     if (term % 2 == 0)
    //     {
    //         sum += term;
    //     }
    //     else if (term % 2 == 1)
    //     {
    //         sum += (-1) * term;
    //     }
    //     term++;
    //     n--;
    // }

   if(n%2==0){
       sum=n/2;
   }
   else if(n%2==1){
       sum=((n+1)/2)*(-1);
   }
   cout<<sum;

    return 0;
}