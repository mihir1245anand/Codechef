/**
 * Problem Name: Mana Points
 * Problem Code: MANAPTS
 * Problem URL: https://www.codechef.com/problems/MANAPTS
 * Submission ID: 1330636739
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

        cout << Y / X << endl;
    }

    return 0;
}
