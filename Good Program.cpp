/**
 * Problem Name: Good Program
 * Problem Code: NIBBLE
 * Problem URL: https://www.codechef.com/problems/NIBBLE
 * Submission ID: 1343831806
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

        if (N % 4 == 0)
            cout << "Good\n";
        else
            cout << "Not Good\n";
    }

    return 0;
}
