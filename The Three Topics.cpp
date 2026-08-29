/**
 * Problem Name: The Three Topics
 * Problem Code: THREETOPICS
 * Problem URL: https://www.codechef.com/problems/THREETOPICS
 * Submission ID: 1338395786
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    if (X == A || X == B || X == C)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
