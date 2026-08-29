/**
 * Problem Name: CRED Coins
 * Problem Code: CREDCOINS
 * Problem URL: https://www.codechef.com/problems/CREDCOINS
 * Submission ID: 1325597125
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        cout << (X * Y) / 100 << endl;
    }
    return 0;
}
