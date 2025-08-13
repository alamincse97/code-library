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

        vector<int> freq(N + 1, 0);
        for (int i = 0; i < N; ++i) {
            int x; cin >> x;
            ++freq[x];
        }

        int cntNot1 = N - freq[1];                     
        int maxFreqNon1 = 0;                             
        for (int c = 2; c <= N; ++c)
            maxFreqNon1 = max(maxFreqNon1, freq[c]);

        int time0 = cntNot1;
        int time1 = (maxFreqNon1 == 0 ? INT_MAX : 1 + N - maxFreqNon1);

        cout << min(time0, time1) << '\n';
    }
    return 0;
}
