/**
 * Problem Name: Audible Range
 * Problem Code: AUDIBLE
 * Problem URL: https://www.codechef.com/problems/AUDIBLE
 * Submission ID: 1329308594
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X >= 67 && X <= 45000)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
