#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int count =0;
    string str;
    getline(cin, str);

    int len = str.size();
    int sp_space = len%3;
    sp_space -=1;
    for(int i = 0; i<=len; i++){
        cout<< str[i];
        if(len > 3 && sp_space == i){
            cout<<",";
        }
        if(i>sp_space){
            count+=1;
        }
        if(count == 3&& i !=(len-1)){
            cout<<",";
            count = 0;
        }
        
    }
    return 0;
}