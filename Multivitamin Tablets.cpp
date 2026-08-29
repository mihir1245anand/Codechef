/**
 * Problem Name: Multivitamin Tablets
 * Problem Code: TABLETS
 * Problem URL: https://www.codechef.com/problems/TABLETS
 * Submission ID: 1330661582
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

        if (Y >= 3 * X)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
