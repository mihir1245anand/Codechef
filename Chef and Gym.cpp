/**
 * Problem Name: Chef and Gym
 * Problem Code: CGYM
 * Problem URL: https://www.codechef.com/problems/CGYM
 * Submission ID: 1331116970
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

        if (Z >= X + Y)
            cout << 2 << endl;
        else if (Z >= X)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
