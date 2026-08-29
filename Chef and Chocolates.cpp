/**
 * Problem Name: Chef and Chocolates
 * Problem Code: CHEFCHOCO
 * Problem URL: https://www.codechef.com/problems/CHEFCHOCO
 * Submission ID: 1331116097
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin >> T;

    while (T--) {
        int C, X, Y;
        cin >> C >> X >> Y;

        cout << (C - X) * Y << endl;
    }

}
