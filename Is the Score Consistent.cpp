/**
 * Problem Name: Is the Score Consistent
 * Problem Code: TRUESCORE
 * Problem URL: https://www.codechef.com/problems/TRUESCORE
 * Submission ID: 1336573313
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, D;
        cin >> A >> B;
        cin >> C >> D;

        if (C >= A && D >= B)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
