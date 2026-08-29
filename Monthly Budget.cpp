/**
 * Problem Name: Monthly Budget
 * Problem Code: BUDGET_
 * Problem URL: https://www.codechef.com/problems/BUDGET_
 * Submission ID: 1331102543
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

        if (X >= 30 * Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
