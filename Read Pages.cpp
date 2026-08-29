/**
 * Problem Name: Read Pages
 * Problem Code: READPAGES
 * Problem URL: https://www.codechef.com/problems/READPAGES
 * Submission ID: 1330642501
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;

        if (X * Y >= N)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
