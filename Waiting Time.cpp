/**
 * Problem Name: Waiting Time
 * Problem Code: WAITTIME
 * Problem URL: https://www.codechef.com/problems/WAITTIME
 * Submission ID: 1330634390
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int K, X;
        cin >> K >> X;

        cout << 7 * K - X << endl;
    }

    return 0;
}
