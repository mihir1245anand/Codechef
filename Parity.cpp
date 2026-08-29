/**
 * Problem Name: Parity
 * Problem Code: PAR2
 * Problem URL: https://www.codechef.com/problems/PAR2
 * Submission ID: 1330621849
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

        if (N % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
