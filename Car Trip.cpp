/**
 * Problem Name: Car Trip
 * Problem Code: CARTRIP
 * Problem URL: https://www.codechef.com/problems/CARTRIP
 * Submission ID: 1330661186
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        cout << max(X, 300) * 10 << endl;
    }

    return 0;
}
