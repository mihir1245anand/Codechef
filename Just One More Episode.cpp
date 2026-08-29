/**
 * Problem Name: Just One More Episode
 * Problem Code: ONEMORE
 * Problem URL: https://www.codechef.com/problems/ONEMORE
 * Submission ID: 1330635404
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

        if (X > 24)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
