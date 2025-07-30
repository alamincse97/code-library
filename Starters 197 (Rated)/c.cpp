#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int odd = 0;
        for (int i = 0; i < N; i++) {
            int a;
            cin >> a;
            if (a % 2) 
                odd++;
        }
        cout << (odd == 1 ? "Yes\n" : "No\n");
    }
    return 0;
}