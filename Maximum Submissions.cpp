/**
 * Problem Name: Maximum Submissions
 * Problem Code: MAXIMUMSUBS
 * Problem URL: https://www.codechef.com/problems/MAXIMUMSUBS
 * Submission ID: 1330679015
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        cout << (X * 60 - 5) / 30 + 1 << endl;
    }

    return 0;
}
