/**
 * Problem Name: Monopoly in Chefland
 * Problem Code: MONOPOLY
 * Problem URL: https://www.codechef.com/problems/MONOPOLY
 * Submission ID: 1331112907
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int R1, R2, R3;
        cin >> R1 >> R2 >> R3;

        if (R1 > R2 + R3 || R2 > R1 + R3 || R3 > R1 + R2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
