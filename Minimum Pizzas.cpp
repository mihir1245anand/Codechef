/**
 * Problem Name: Minimum Pizzas
 * Problem Code: MINPIZZA
 * Problem URL: https://www.codechef.com/problems/MINPIZZA
 * Submission ID: 1325598114
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

        cout << (N * X + 3) / 4 << endl;
    }

    return 0;
}
