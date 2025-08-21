#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string a;
        cin >> a;

        int m;
        cin >> m;

        string b, c;
        cin >> b >> c;

        deque<char> d(a.begin(), a.end());

        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                d.push_front(b[i]);
            } else {
                d.push_back(b[i]);
            }
        }

        string ans;
        ans.reserve(d.size());

        while (!d.empty()) {
            ans += d.front();
            d.pop_front();
        }

        cout << ans << "\n";
    }
    return 0;
}
