/**
 * Problem Name: Rain in Chefland
 * Problem Code: RAINFALL1
 * Problem URL: https://www.codechef.com/problems/RAINFALL1
 * Submission ID: 1330637316
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X < 3)
            cout << "LIGHT" << endl;
        else if (X < 7)
            cout << "MODERATE" << endl;
        else
            cout << "HEAVY" << endl;
    }

    return 0;
}
