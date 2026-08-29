/**
 * Problem Name: Buying GPU
 * Problem Code: GPUBUY
 * Problem URL: https://www.codechef.com/problems/GPUBUY
 * Submission ID: 1322145166
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (Z <= Y) {
            cout << -1 << endl;
        } else {
            int diff = Z - Y;
            int months = (X + diff - 1) / diff;
            cout << months << endl;
        }
    }

    return 0;
}
