/**
 * Problem Name: Parliament
 * Problem Code: PARLIAMENT
 * Problem URL: https://www.codechef.com/problems/PARLIAMENT
 * Submission ID: 1330673455
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

        if (2 * X >= N)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
