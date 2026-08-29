/**
 * Problem Name: Battery Health
 * Problem Code: BTRYHLTH
 * Problem URL: https://www.codechef.com/problems/BTRYHLTH
 * Submission ID: 1330623864
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

        if (X >= 80)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
