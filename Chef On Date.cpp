/**
 * Problem Name: Chef On Date
 * Problem Code: CHEFONDATE
 * Problem URL: https://www.codechef.com/problems/CHEFONDATE
 * Submission ID: 1330620947
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
