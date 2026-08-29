/**
 * Problem Name: Final Population
 * Problem Code: POPULATION
 * Problem URL: https://www.codechef.com/problems/POPULATION
 * Submission ID: 1330659739
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        cout << X - Y + Z << endl;
    }
}
