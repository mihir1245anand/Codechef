/**
 * Problem Name: Mahasena
 * Problem Code: AMR15A
 * Problem URL: https://www.codechef.com/problems/AMR15A
 * Submission ID: 1332567666
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int even = 0, odd = 0;

    for (int i = 0; i < N; i++) {
        int weapons;
        cin >> weapons;

        if (weapons % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even > odd)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";

    return 0;
}
