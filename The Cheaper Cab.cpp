/**
 * Problem Name: The Cheaper Cab
 * Problem Code: CABS
 * Problem URL: https://www.codechef.com/problems/CABS
 * Submission ID: 1330669091
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

        if (X < Y)
            cout << "FIRST" << endl;
        else if (Y < X)
            cout << "SECOND" << endl;
        else
            cout << "ANY" << endl;
    }

    return 0;
}
