/**
 * Problem Name: Bus  Seat Numbering
 * Problem Code: SEATNUMBER
 * Problem URL: https://www.codechef.com/problems/SEATNUMBER
 * Submission ID: 1345148519
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N;
	    cin>>N;
	    if(N>=01 && N<=10){
	        cout<<"lower double"<<endl;
	    }
	    else if(N>=11 && N<=15){
	        cout<<"lower single"<<endl;
	    }
	    else if(N>=16 && N<=25){
	        cout<<"upper double"<<endl;
	   }
	    else{
	        cout<<"upper single"<<endl;
	    }
	}
	return 0;

}
