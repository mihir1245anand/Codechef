/**
 * Problem Name: Profit Increment
 * Problem Code: PROINC
 * Problem URL: https://www.codechef.com/problems/PROINC
 * Submission ID: 1330673081
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

        cout << Y + X / 10 << endl;
    }

    return 0;
}
