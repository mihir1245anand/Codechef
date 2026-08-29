/**
 * Problem Name: Car or Bike
 * Problem Code: TRAVELFAST
 * Problem URL: https://www.codechef.com/problems/TRAVELFAST
 * Submission ID: 1334829446
 * Language: C++
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X < Y)
            cout << "BIKE" << endl;
        else if (Y < X)
            cout << "CAR" << endl;
        else
            cout << "SAME" << endl;
    }

    return 0;
}
