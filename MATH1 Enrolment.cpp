/**
 * Problem Name: MATH1 Enrolment
 * Problem Code: M1ENROL
 * Problem URL: https://www.codechef.com/problems/M1ENROL
 * Submission ID: 1330648485
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

        cout << max(0, Y - X) << endl;
    }

    return 0;
}
