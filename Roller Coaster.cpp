/**
 * Problem Name: Roller Coaster
 * Problem Code: MINHEIGHT
 * Problem URL: https://www.codechef.com/problems/MINHEIGHT
 * Submission ID: 1330599237
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, H;
        cin >> X >> H;

        if (X >= H)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
