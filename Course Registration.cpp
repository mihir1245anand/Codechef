/**
 * Problem Name: Course Registration
 * Problem Code: COURSEREG
 * Problem URL: https://www.codechef.com/problems/COURSEREG
 * Submission ID: 1331106699
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M, K;
        cin >> N >> M >> K;

        if (N <= M - K)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
