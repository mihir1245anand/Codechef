/**
 * Problem Name: Monopoly
 * Problem Code: MONOPOLY2
 * Problem URL: https://www.codechef.com/problems/MONOPOLY2
 * Submission ID: 1340604973
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S;

        int total = P + Q + R + S;
        int mx = max({P, Q, R, S});

        if (mx > total - mx)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
