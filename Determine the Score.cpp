/**
 * Problem Name: Determine the Score
 * Problem Code: DETSCORE
 * Problem URL: https://www.codechef.com/problems/DETSCORE
 * Submission ID: 1325587492
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, N;
        cin >> X >> N;

        cout << (X / 10) * N << endl;
    }

    return 0;
}
