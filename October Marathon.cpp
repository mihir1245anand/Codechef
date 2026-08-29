/**
 * Problem Name: October Marathon
 * Problem Code: OCTATHON
 * Problem URL: https://www.codechef.com/problems/OCTATHON
 * Submission ID: 1330634789
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    int X;
    cin >> X;

    if (X < 3)
        cout << "GOLD";
    else if (X < 6)
        cout << "SILVER";
    else
        cout << "BRONZE";

    return 0;
}
