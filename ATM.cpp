/**
 * Problem Name: ATM
 * Problem Code: HS08TEST
 * Problem URL: https://www.codechef.com/problems/HS08TEST
 * Submission ID: 1330671695
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    double Y;

    cin >> X >> Y;

    if (X % 5 == 0 && Y >= X + 0.50) {
        Y = Y - X - 0.50;
    }

    cout << fixed << setprecision(2) << Y;

    return 0;
}
