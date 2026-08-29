/**
 * Problem Name: Odd Even
 * Problem Code: ODDEVEN7
 * Problem URL: https://www.codechef.com/problems/ODDEVEN7
 * Submission ID: 1344893274
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int odd = 0, even = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x % 2 == 0)
                even++;
            else
                odd++;
        }

        int ans = 2 * min(odd, even);

        if (odd != even)
            ans++;

        cout << ans << endl;
    }

    return 0;
}
