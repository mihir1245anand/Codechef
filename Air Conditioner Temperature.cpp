/**
 * Problem Name: Air Conditioner Temperature
 * Problem Code: ACTEMP
 * Problem URL: https://www.codechef.com/problems/ACTEMP
 * Submission ID: 1343019005
 * Language: C++
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        if (max(A, C) <= B)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
