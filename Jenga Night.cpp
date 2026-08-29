/**
 * Problem Name: Jenga Night
 * Problem Code: JENGA
 * Problem URL: https://www.codechef.com/problems/JENGA
 * Submission ID: 1345083973
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    if(X%N==0){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
	

}
