/**
 * Problem Name: Make Multiple
 * Problem Code: MUL123
 * Problem URL: https://www.codechef.com/problems/MUL123
 * Submission ID: 1341028627
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N % 3 == 0) {
            cout << 0 << '\n';
            continue;
        }

        int next5 = ((N / 5) + 1) * 5;

        if ((N + 1) % 3 == 0 || next5 % 3 == 0)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }

    return 0;
}
