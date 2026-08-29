/**
 * Problem Name: Sum of Digits
 * Problem Code: FLOW006
 * Problem URL: https://www.codechef.com/problems/FLOW006
 * Submission ID: 1331101810
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int sum = 0;
        while (N > 0) {
            sum += N % 10;
            N /= 10;
        }

        cout << sum << endl;
    }

    return 0;
}
