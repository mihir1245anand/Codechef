/**
 * Problem Name: Six Friends
 * Problem Code: SIXFRIENDS
 * Problem URL: https://www.codechef.com/problems/SIXFRIENDS
 * Submission ID: 1330662291
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        cout << min(3 * X, 2 * Y) << endl;
    }

    return 0;
}
