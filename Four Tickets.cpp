/**
 * Problem Name: Four Tickets
 * Problem Code: FOURTICKETS
 * Problem URL: https://www.codechef.com/problems/FOURTICKETS
 * Submission ID: 1330629819
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

        if (4 * X <= 1000)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
