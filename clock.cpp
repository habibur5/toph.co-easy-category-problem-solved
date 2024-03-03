#include <bits/stdc++.h>
#include <cmath>


using namespace std;
int main(){
    int hours, minute;
    float angel,h,m;

    cin>> hours>> minute;

    h = ((hours%12) +((float)minute/60))*30;

    m = minute*6;

    angel = abs(h-m);
   if( angel> 180){

      printf("%.4f",360-angel);
    
   }else{
    printf("%.4f",angel);

   }
   
}