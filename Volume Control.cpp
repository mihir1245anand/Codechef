/**
 * Problem Name: Volume Control
 * Problem Code: VOLCONTROL
 * Problem URL: https://www.codechef.com/problems/VOLCONTROL
 * Submission ID: 1330671170
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

        cout << abs(X - Y) << endl;
    }

    return 0;
}
