/**
 * Problem Name: Lunchtime
 * Problem Code: LTIME
 * Problem URL: https://www.codechef.com/problems/LTIME
 * Submission ID: 1330657467
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int X;
        cin >> X;

        if (X >= 1 && X <= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl; 
    }

}
