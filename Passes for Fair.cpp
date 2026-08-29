/**
 * Problem Name: Passes for Fair
 * Problem Code: FAIRPASS
 * Problem URL: https://www.codechef.com/problems/FAIRPASS
 * Submission ID: 1330641862
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        if (K >= N + 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
