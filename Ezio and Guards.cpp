/**
 * Problem Name: Ezio and Guards
 * Problem Code: MANIPULATE
 * Problem URL: https://www.codechef.com/problems/MANIPULATE
 * Submission ID: 1330676560
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

        if (X >= Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
