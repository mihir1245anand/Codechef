/**
 * Problem Name: Interior Design
 * Problem Code: INTRDSGN
 * Problem URL: https://www.codechef.com/problems/INTRDSGN
 * Submission ID: 1330661066
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X1, Y1, X2, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;

        int cost1 = X1 + Y1;
        int cost2 = X2 + Y2;

        cout << min(cost1, cost2) << endl;
    }

    return 0;
}
