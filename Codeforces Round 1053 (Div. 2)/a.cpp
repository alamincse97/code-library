#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        int m;
        cin >> n >> m;

        vector<long long> a(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }

        bool arith = true;
        if (m > 1) {
            for (int i = 0; i < m - 1; ++i) {
                if (a[i + 1] != a[i] + 1) {
                    arith = false;
                    break;
                }
            }
        }

        if (arith) {
          
            long long ans = n - a[m - 1] + 1;
            cout << ans << '\n';
        } else {
    
            cout << 1 << '\n';
        }
    }
    return 0;
}
