/**
 * Problem Name: Maximum Sum
 * Problem Code: MAXSUM77
 * Problem URL: https://www.codechef.com/problems/MAXSUM77
 * Submission ID: 1352033729
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int remaining_len = n - k;
    
    int current_sum = 0;
    for (int i = 0; i < remaining_len; ++i) {
        current_sum += a[i];
    }

    int max_sum = current_sum;

    for (int i = remaining_len; i < n; ++i) {
        current_sum += a[i] - a[i - remaining_len];
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
