/**
 * Problem Name: Bus Rows
 * Problem Code: BUSROW
 * Problem URL: https://www.codechef.com/problems/BUSROW
 * Submission ID: 1341024188
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

	void solve(){
	    long long N,M,X;
	    cin>>N>>M>>X;
	    
	    long long R=(X+M-1)/M;
	    long long ans=min(R,N-R+1);
	    cout<<ans<<"\n";
	}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}
