/**
 * Problem Name: Chefland Games
 * Problem Code: CHEFGAMES
 * Problem URL: https://www.codechef.com/problems/CHEFGAMES
 * Submission ID: 1325598213
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int R1, R2, R3, R4;
        cin >> R1 >> R2 >> R3 >> R4;

        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0)
            cout << "IN" << endl;
        else
            cout << "OUT" << endl;
    }

    return 0;
}
