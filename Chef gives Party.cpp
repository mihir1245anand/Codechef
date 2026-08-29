/**
 * Problem Name: Chef gives Party
 * Problem Code: PARTY2
 * Problem URL: https://www.codechef.com/problems/PARTY2
 * Submission ID: 1330659971
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;

        if (K >= N * X)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
