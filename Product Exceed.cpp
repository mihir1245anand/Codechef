/**
 * Problem Name: Product Exceed
 * Problem Code: PRDEXC
 * Problem URL: https://www.codechef.com/problems/PRDEXC
 * Submission ID: 1322301499
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, P;
        cin >> X >> Y >> P;

        if (X * Y >= P) {
            cout << 0 << endl;
            continue;
        }

        int ans = 1000000;

        // Try all possible increments of X
        for (int a = 0; a <= 100; a++) {
            int nx = X + a;
            int b = 0;
            while (nx * (Y + b) < P) b++;
            ans = min(ans, a + b);
        }

        cout << ans << endl;
    }

    return 0;
}
