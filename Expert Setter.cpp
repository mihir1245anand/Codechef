/**
 * Problem Name: Expert Setter
 * Problem Code: EXPERT
 * Problem URL: https://www.codechef.com/problems/EXPERT
 * Submission ID: 1325599036
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long X, Y;
        cin >> X >> Y;

        if (2 * Y >= X)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
