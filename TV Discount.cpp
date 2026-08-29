/**
 * Problem Name: TV Discount
 * Problem Code: TVDISC
 * Problem URL: https://www.codechef.com/problems/TVDISC
 * Submission ID: 1330679930
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        int first = A - C;
        int second = B - D;

        if (first < second)
            cout << "First" << endl;
        else if (second < first)
            cout << "Second" << endl;
        else
            cout << "Any" << endl;
    }

    return 0;
}
