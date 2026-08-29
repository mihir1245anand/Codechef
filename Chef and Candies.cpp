/**
 * Problem Name: Chef and Candies
 * Problem Code: CHEFCAND
 * Problem URL: https://www.codechef.com/problems/CHEFCAND
 * Submission ID: 1333432606
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    while(T--){
        int n,x;
        cin>>n>>x;
        if (x >= n) {
            cout << 0 << endl;
        } else {
            int need = n - x;
            cout << (need + 3) / 4 << endl;
        }

    }

}
