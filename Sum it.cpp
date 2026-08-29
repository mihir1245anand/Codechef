/**
 * Problem Name: Sum it
 * Problem Code: SUMM
 * Problem URL: https://www.codechef.com/problems/SUMM
 * Submission ID: 1330632390
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        if (A + B == C)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
