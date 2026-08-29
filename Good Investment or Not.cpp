/**
 * Problem Name: Good Investment or Not
 * Problem Code: INVESTMENT
 * Problem URL: https://www.codechef.com/problems/INVESTMENT
 * Submission ID: 1330658954
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

        if (X >= 2 * Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
