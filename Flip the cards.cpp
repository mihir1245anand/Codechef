/**
 * Problem Name: Flip the cards
 * Problem Code: FLIPCARDS
 * Problem URL: https://www.codechef.com/problems/FLIPCARDS
 * Submission ID: 1346983646
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        cout << min(X, N - X) << '\n';
    }

    return 0;
}
