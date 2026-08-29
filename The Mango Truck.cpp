/**
 * Problem Name: The Mango Truck
 * Problem Code: MANGOES
 * Problem URL: https://www.codechef.com/problems/MANGOES
 * Submission ID: 1331112534
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

        cout << (Z - Y) / X << endl;
    }

    return 0;
}
