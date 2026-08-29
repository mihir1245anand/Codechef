/**
 * Problem Name: Chef and Masks
 * Problem Code: CMASKS
 * Problem URL: https://www.codechef.com/problems/CMASKS
 * Submission ID: 1330677111
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

        if (10 * Y <= 100 * X)
            cout << "CLOTH" << endl;
        else
            cout << "DISPOSABLE" << endl;
    }

    return 0;
}
