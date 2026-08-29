/**
 * Problem Name: Maximise the Tastiness
 * Problem Code: MAXTASTE
 * Problem URL: https://www.codechef.com/problems/MAXTASTE
 * Submission ID: 1345556318
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << max(a, b) + max(c, d) << endl;
    }

    return 0;
}
