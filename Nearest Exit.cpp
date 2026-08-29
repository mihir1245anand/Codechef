/**
 * Problem Name: Nearest Exit
 * Problem Code: NEARESTEXIT
 * Problem URL: https://www.codechef.com/problems/NEARESTEXIT
 * Submission ID: 1343019365
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        if (X <= 50)
            cout << "LEFT" << endl;
        else
            cout << "RIGHT" << endl;
    }

    return 0;
}
