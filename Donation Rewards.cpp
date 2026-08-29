/**
 * Problem Name: Donation Rewards
 * Problem Code: DOREWARD
 * Problem URL: https://www.codechef.com/problems/DOREWARD
 * Submission ID: 1330668684
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

        if (X <= 3)
            cout << "BRONZE" << endl;
        else if (X <= 6)
            cout << "SILVER" << endl;
        else
            cout << "GOLD" << endl;
    }

    return 0;
}
