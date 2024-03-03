#include <bits/stdc++.h>

using namespace std;

int main(){
    string n, n2;
    cin>> n>> n2;
    int sum=0;
    for(int i=(n.size()-1); i>=0; i--){

        sum = n[i]-'0'+ n2[i]-'0';

        if (sum > 9){
            cout << "Yes";
            return 0;
        }
    }
    cout<< "No";
    

    return 0;
}