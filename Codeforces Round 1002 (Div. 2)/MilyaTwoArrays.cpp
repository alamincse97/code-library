#include <bits/stdc++.h>
using namespace std;

void solveCase(int n, vector<int>& a, vector<int>& b) {
    set<int> setA(a.begin(), a.end());  
    set<int> setB(b.begin(), b.end());  
    
    int distinctA = setA.size();
    int distinctB = setB.size();

    if (distinctB == 1) {
        cout << (distinctA >= 3 ? "YES" : "NO") << endl;
        return;
    }

    if (distinctA == 1) {
        cout << (distinctB >= 3 ? "YES" : "NO") << endl;
        return;
    }

    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        solveCase(n, a, b);
    }

    return 0;
}
