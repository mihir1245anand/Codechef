/**
 * Problem Name: Who is taller!
 * Problem Code: TALLER
 * Problem URL: https://www.codechef.com/problems/TALLER
 * Submission ID: 1330581352
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

        if (X > Y)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}
