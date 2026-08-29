/**
 * Problem Name: Insurance
 * Problem Code: INSURANCE
 * Problem URL: https://www.codechef.com/problems/INSURANCE
 * Submission ID: 1331107814
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << min(X, Y) << endl;
    }

    return 0;
}
