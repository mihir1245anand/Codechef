/**
 * Problem Name: Reach Weight
 * Problem Code: REACHWT
 * Problem URL: https://www.codechef.com/problems/REACHWT
 * Submission ID: 1352018414
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int cost=(n/2)*30+(n%2)*20;
        cout<<cost<<"\n";
    }
    return 0;

}
