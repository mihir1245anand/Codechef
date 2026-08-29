/**
 * Problem Name: Check Even
 * Problem Code: CHKEV
 * Problem URL: https://www.codechef.com/problems/CHKEV
 * Submission ID: 1340999428
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long L,R;
	cin>>L>>R;
	
	if(L==R && L%2!=0){
	    cout<<"No\n";
	}
	else{
	    cout<<"Yes\n";
	}

}
