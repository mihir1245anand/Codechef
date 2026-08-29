/**
 * Problem Name: EXAMCHEF
 * Problem Code: EXAMCHEF
 * Problem URL: https://www.codechef.com/problems/EXAMCHEF
 * Submission ID: 1332564944
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	     if (2 * z > x * y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
