/**
 * Problem Name: Elections in Chefland
 * Problem Code: ELECTN
 * Problem URL: https://www.codechef.com/problems/ELECTN
 * Submission ID: 1343832499
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        int count = 0;

        for (int i = 0; i < N; i++) {
            int age;
            cin >> age;

            if (age >= X)
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
