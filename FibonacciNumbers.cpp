#include <bits/stdc++.h>

using namespace std;

int main(){
   int fib,first4=0,second=1,third;
   cin>>fib;

   for(int i=0; i<fib; i++){

    third  = first4 + second;
    first4 = second;
    second = third;

   }
   cout<< first4;

   return 0;
}