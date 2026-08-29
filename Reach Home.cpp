/**
 * Problem Name: Reach Home
 * Problem Code: REACH_HOME
 * Problem URL: https://www.codechef.com/problems/REACH_HOME
 * Submission ID: 1330667882
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

        if (5 * X >= Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
