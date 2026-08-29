/**
 * Problem Name: Netflix
 * Problem Code: NETFLIX
 * Problem URL: https://www.codechef.com/problems/NETFLIX
 * Submission ID: 1331116548
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, X;
        cin >> A >> B >> C >> X;

        if (A + B >= X || A + C >= X || B + C >= X)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
