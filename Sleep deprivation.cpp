/**
 * Problem Name: Sleep deprivation
 * Problem Code: SLEEP
 * Problem URL: https://www.codechef.com/problems/SLEEP
 * Submission ID: 1330647338
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

        if (X < 7)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
