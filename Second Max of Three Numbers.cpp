/**
 * Problem Name: Second Max of Three Numbers
 * Problem Code: SNDMAX
 * Problem URL: https://www.codechef.com/problems/SNDMAX
 * Submission ID: 1330628146
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        sort(a, a + 3);
        cout << a[1] << endl;
    }

    return 0;
}
