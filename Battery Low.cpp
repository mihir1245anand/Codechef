/**
 * Problem Name: Battery Low
 * Problem Code: BATTERYLOW
 * Problem URL: https://www.codechef.com/problems/BATTERYLOW
 * Submission ID: 1331110905
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

        if (X <= 15)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
