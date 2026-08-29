/**
 * Problem Name: The Gift
 * Problem Code: CS2023_GIFT
 * Problem URL: https://www.codechef.com/problems/CS2023_GIFT
 * Submission ID: 1330663983
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, N, M;
    cin >> X >> N >> M;

    if (X + M >= N)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
