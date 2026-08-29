/**
 * Problem Name: Pending Assignments
 * Problem Code: ASSIGNMNT
 * Problem URL: https://www.codechef.com/problems/ASSIGNMNT
 * Submission ID: 1331106138
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (X * Y <= Z * 1440)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
