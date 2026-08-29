/**
 * Problem Name: Candy Division
 * Problem Code: CANDIVIDE
 * Problem URL: https://www.codechef.com/problems/CANDIVIDE
 * Submission ID: 1330619655
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
