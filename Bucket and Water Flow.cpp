/**
 * Problem Name: Bucket and Water Flow
 * Problem Code: WATERFLOW
 * Problem URL: https://www.codechef.com/problems/WATERFLOW
 * Submission ID: 1331113920
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;

        int total = W + Y * Z;

        if (total > X)
            cout << "overflow" << endl;
        else if (total == X)
            cout << "filled" << endl;
        else
            cout << "unfilled" << endl;
    }

    return 0;
}
