#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long sum = 0, max_time = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        max_time = max(max_time, a[i]);
    }

    // Check the two conditions
    if (max_time > sum - max_time || sum % 2 == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
