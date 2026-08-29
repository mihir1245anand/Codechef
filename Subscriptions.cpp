/**
 * Problem Name: Subscriptions
 * Problem Code: SUBSCRIBE_
 * Problem URL: https://www.codechef.com/problems/SUBSCRIBE_
 * Submission ID: 1332559646
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

        int subscriptions = (N + 5) / 6;   
        cout << subscriptions * X << endl;
    }

    return 0;
}
