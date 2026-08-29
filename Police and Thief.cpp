/**
 * Problem Name: Police and Thief
 * Problem Code: POLTHIEF
 * Problem URL: https://www.codechef.com/problems/POLTHIEF
 * Submission ID: 1346293712
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

        cout << abs(X - Y) << '\n';
    }

    return 0;
}
