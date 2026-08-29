/**
 * Problem Name: Codechef Airlines
 * Problem Code: AIRLINES
 * Problem URL: https://www.codechef.com/problems/AIRLINES
 * Submission ID: 1331110204
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int seats = 10 * X;
        cout << min(Y, seats) * Z << endl;
    }

    return 0;
}
