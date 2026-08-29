/**
 * Problem Name: Reverse The Number
 * Problem Code: FLOW007
 * Problem URL: https://www.codechef.com/problems/FLOW007
 * Submission ID: 1343212998
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

        int rev = 0;
        while (N > 0) {
            rev = rev * 10 + (N % 10);
            N /= 10;
        }

        cout << rev << endl;
    }

    return 0;
}
