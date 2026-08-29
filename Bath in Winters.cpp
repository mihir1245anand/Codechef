/**
 * Problem Name: Bath in Winters
 * Problem Code: BATH
 * Problem URL: https://www.codechef.com/problems/BATH
 * Submission ID: 1347233078
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

        cout << X / (2 * Y) << endl;
    }

    return 0;
}
