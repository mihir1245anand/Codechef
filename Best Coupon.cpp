/**
 * Problem Name: Best Coupon
 * Problem Code: CHEAPFOOD
 * Problem URL: https://www.codechef.com/problems/CHEAPFOOD
 * Submission ID: 1331118050
 * Language: C++
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        cout << max(X / 10, 100) << endl;
    }

    return 0;
}
