/**
 * Problem Name: Tom and Jerry Chase
 * Problem Code: JERRYCHASE
 * Problem URL: https://www.codechef.com/problems/JERRYCHASE
 * Submission ID: 1330625534
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
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
