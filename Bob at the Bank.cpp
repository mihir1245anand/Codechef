/**
 * Problem Name: Bob at the Bank
 * Problem Code: BOBBANK
 * Problem URL: https://www.codechef.com/problems/BOBBANK
 * Submission ID: 1331111875
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long W, X, Y, Z;
        cin >> W >> X >> Y >> Z;

        cout << W + (X - Y) * Z << endl;
    }

    return 0;
}
