#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> s(n + 1, 0);
        for (int i = 0; i < n; i++) {
            s[i + 1] = s[i] + a[i];
        }

        int ans = 0;
        for (int i = 0; i + k <= n; ) {
            if (s[i + k] - s[i] == 0) {
                ans++;
                i += k + 1;
            } else {
                i++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
