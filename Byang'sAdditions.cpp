#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;
    while(a.size() < 10)a = "0" + a;
    while(b.size() < 10)b = "0" + b;
    int confuse = 0;

    for(int i = 0;i < b.size();i++){
        int d = (int) b[i] + (int)a[i];
        if(d > 9)confuse = 1;
    }
    if(confuse==1)cout << "Yes\n";
    else cout << "No\n";
}