// problem link
// https://www.codechef.com/problems/HOWMANYMAX?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, count = 0;
	    cin >> n;
	    string str;
	    cin >> str;

	    for(int i = 0;i < n-2;i++){
	        if(str[i] == '0' && str[i+1] == '1'){
	            count++;
	        }
	    }

	    if(str[0] == '1'){
	        count++;
	    }

	    if(str[n-2] == '0'){
	        count++;
	    }

	    cout << count << endl;
	}
}
