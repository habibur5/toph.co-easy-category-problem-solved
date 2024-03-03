#include <bits/stdc++.h>

using namespace std;

int main(){
   unsigned long long n,sum =1;
   cin>>n;

   for(int i=n; i>=1; i--){

    sum *=i;
    sum%=10000;
   }
   if(sum == 0){
    cout << "0000";
   }else{
    cout << sum;
   }
   return 0;
}