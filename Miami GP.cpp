/**
 * Problem Name: Miami GP
 * Problem Code: F1RULE
 * Problem URL: https://www.codechef.com/problems/F1RULE
 * Submission ID: 1331114273
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

        if (100 * Y <= 107 * X)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
