/**
 * Problem Name: Masterchef finals
 * Problem Code: TOP10
 * Problem URL: https://www.codechef.com/problems/TOP10
 * Submission ID: 1325586205
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

        if (X <= 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
