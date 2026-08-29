/**
 * Problem Name: Chairs Requirement
 * Problem Code: CHAIRS_
 * Problem URL: https://www.codechef.com/problems/CHAIRS_
 * Submission ID: 1330630257
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

        cout << max(0, X - Y) << endl;
    }

    return 0;
}
