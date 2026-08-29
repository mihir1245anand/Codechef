/**
 * Problem Name: Greater Average
 * Problem Code: AVGPROBLEM
 * Problem URL: https://www.codechef.com/problems/AVGPROBLEM
 * Submission ID: 1323448327
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        if (A + B > 2 * C)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
