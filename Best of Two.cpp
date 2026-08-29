/**
 * Problem Name: Best of Two
 * Problem Code: BESTOFTWO
 * Problem URL: https://www.codechef.com/problems/BESTOFTWO
 * Submission ID: 1330587822
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << max(X, Y) << endl;
    }

    return 0;
}
