/**
 * Problem Name: Qualify the round
 * Problem Code: QUALIFY
 * Problem URL: https://www.codechef.com/problems/QUALIFY
 * Submission ID: 1343832152
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, A, B;
        cin >> X >> A >> B;

        int score = A + 2 * B;

        if (score >= X)
            cout << "Qualify\n";
        else
            cout << "NotQualify\n";
    }

    return 0;
}
