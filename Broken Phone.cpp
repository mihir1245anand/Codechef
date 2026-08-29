/**
 * Problem Name: Broken Phone
 * Problem Code: BROKENPHONE
 * Problem URL: https://www.codechef.com/problems/BROKENPHONE
 * Submission ID: 1330680144
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
            cout << "REPAIR" << endl;
        else if (Y < X)
            cout << "NEW PHONE" << endl;
        else
            cout << "ANY" << endl;
    }

    return 0;
}
