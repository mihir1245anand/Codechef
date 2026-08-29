/**
 * Problem Name: Finding Shoes
 * Problem Code: FINDSHOES
 * Problem URL: https://www.codechef.com/problems/FINDSHOES
 * Submission ID: 1348507599
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

        int extraShoes = N + max(0, N - M);

        cout << extraShoes << endl;
    }

    return 0;
}
