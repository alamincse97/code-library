#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;  // use long long to prevent overflow
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        sum += x;
    }

    cout << abs(sum) << endl;

    return 0;
}
