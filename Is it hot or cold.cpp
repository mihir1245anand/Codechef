/**
 * Problem Name: Is it hot or cold
 * Problem Code: HOTCOLD
 * Problem URL: https://www.codechef.com/problems/HOTCOLD
 * Submission ID: 1330672449
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int C;
        cin >> C;

        if (C > 20)
            cout << "HOT" << endl;
        else
            cout << "COLD" << endl;
    }

    return 0;
}
