/**
 * Problem Name: Playlist
 * Problem Code: SONGS
 * Problem URL: https://www.codechef.com/problems/SONGS
 * Submission ID: 1331115267
 * Language: C++
 */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        cout << N / (3 * X) << endl;
    }

    return 0;
}
