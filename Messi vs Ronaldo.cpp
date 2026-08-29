/**
 * Problem Name: Messi vs Ronaldo
 * Problem Code: MVR
 * Problem URL: https://www.codechef.com/problems/MVR
 * Submission ID: 1330633777
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, X, Y;
    cin >> A >> B >> X >> Y;

    int messi = 2 * A + B;
    int ronaldo = 2 * X + Y;

    if (messi > ronaldo)
        cout << "Messi";
    else if (ronaldo > messi)
        cout << "Ronaldo";
    else
        cout << "Equal";

    return 0;
}
