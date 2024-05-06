// problem link
// https://codeforces.com/problemset/problem/1542/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n;
        int count = 0;

        for(int i = 0; i < (2*n);i++){
            cin >> k;
            if((k&1) == 1){
                count++;
            }
        }

        if(count == n){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
