/**
 * Problem Name: Test Score
 * Problem Code: CHEFSCORE
 * Problem URL: https://www.codechef.com/problems/CHEFSCORE
 * Submission ID: 1344282734
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        if (Y % X == 0 && Y <= N * X)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
