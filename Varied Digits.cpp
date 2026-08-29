/**
 * Problem Name: Varied Digits
 * Problem Code: VARDIGS
 * Problem URL: https://www.codechef.com/problems/VARDIGS
 * Submission ID: 1322130983
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	int tens=x/10;
	int ones=x%10;
	
	if(tens!=ones)
	cout<<"yes";
	else
	cout<<"No";
	return 0;
	

}
