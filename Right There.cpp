/**
 * Problem Name: Right There
 * Problem Code: RIGHTTHERE
 * Problem URL: https://www.codechef.com/problems/RIGHTTHERE
 * Submission ID: 1330626269
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        if (X >= N)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
