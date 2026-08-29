/**
 * Problem Name: Puzzle Hunt
 * Problem Code: PUZHUNT
 * Problem URL: https://www.codechef.com/problems/PUZHUNT
 * Submission ID: 1329311201
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N >= 6 && N <= 8)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
