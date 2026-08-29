/**
 * Problem Name: Bull or Bear
 * Problem Code: BULLBEAR
 * Problem URL: https://www.codechef.com/problems/BULLBEAR
 * Submission ID: 1330628687
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

        if (Y > X)
            cout << "PROFIT" << endl;
        else if (Y < X)
            cout << "LOSS" << endl;
        else
            cout << "NEUTRAL" << endl;
    }

    return 0;
}
