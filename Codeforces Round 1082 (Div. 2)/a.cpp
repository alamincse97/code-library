#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;

    if ((x - 2*y) % 3 != 0) {
        cout << "NO" << endl;
        return;
    }

    if (y >= 0) {
        if (x >= 2*y) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        if (x >= -4*y) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}