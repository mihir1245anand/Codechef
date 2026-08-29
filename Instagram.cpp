/**
 * Problem Name: Instagram
 * Problem Code: INSTAGRAM
 * Problem URL: https://www.codechef.com/problems/INSTAGRAM
 * Submission ID: 1330670528
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

        if (X > 10 * Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
