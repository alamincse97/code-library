#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    long long sum = 0;

    for (int &val : a) {
        cin >> val;
        sum += val;
    }

    if (sum == 1LL * x * n) {
        cout << "YES\n";
        return;
    }

    for (int val : a) {
        if (val == x) {
            cout << "YES\n";
            return;
        }
    }

    if (sum % x == 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
