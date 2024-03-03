#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, res =0;
    cin>>n;

    int array[n+2];
    for(int i = 1 ; i<=n; i++){
        cin >> array[i];
    }
    for (int j = 2; j <= n; j++){
            if(array[j-1]>array[j]){
                res = 1;
                break;
            } 
        
    }
    if(res==0){
        cout <<"Yes"<<endl;
    }else{
        cout <<"No"<<endl;
    }
    return 0;
    
}