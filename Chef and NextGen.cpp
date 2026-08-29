/**
 * Problem Name: Chef and NextGen
 * Problem Code: HELIUM3
 * Problem URL: https://www.codechef.com/problems/HELIUM3
 * Submission ID: 1332044135
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        if (X * Y >= A * B)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
