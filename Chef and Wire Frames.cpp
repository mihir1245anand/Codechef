/**
 * Problem Name: Chef and Wire Frames
 * Problem Code: CWIREFRAME
 * Problem URL: https://www.codechef.com/problems/CWIREFRAME
 * Submission ID: 1330662569
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, X;
        cin >> N >> M >> X;

        cout << 2 * (N + M) * X << endl;
    }

    return 0;
}
