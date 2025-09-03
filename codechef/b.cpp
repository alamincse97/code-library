#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int need = 50 - X;
        int min_sum = 2 * Y;
        int max_sum = 2 * Y + 10;

        if (need >= min_sum && need <= max_sum) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
