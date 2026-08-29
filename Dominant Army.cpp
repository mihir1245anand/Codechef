/**
 * Problem Name: Dominant Army
 * Problem Code: DOMINANT
 * Problem URL: https://www.codechef.com/problems/DOMINANT
 * Submission ID: 1331114523
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int NA, NB, NC;
        cin >> NA >> NB >> NC;

        if (NA > NB + NC || NB > NA + NC || NC > NA + NB)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
