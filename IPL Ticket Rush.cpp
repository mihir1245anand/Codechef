/**
 * Problem Name: IPL Ticket Rush
 * Problem Code: IPLTRSH
 * Problem URL: https://www.codechef.com/problems/IPLTRSH
 * Submission ID: 1329308416
 * Language: C++
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        cout << max(0, N - M) << endl;
    }

    return 0;
}
