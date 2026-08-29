/**
 * Problem Name: Mirror Swap
 * Problem Code: MRSWAP
 * Problem URL: https://www.codechef.com/problems/MRSWAP
 * Submission ID: 1344870536
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    
	    vector<int>A(2*N);
	    
	    for(int i=0;i<2*N;i++){
	         cin>>A[i];
	    }
	    int sum=0;
	    
	     for (int i = 0; i < N; i++) {
            sum += max(A[i], A[2 * N - 1 - i]);
        }

        cout << sum << endl;
	}

}
