#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;
        
        long long depth = 0;
        bool littleK_turn = false;
        
        while (depth <= a) {
            if (!littleK_turn) {
                depth += x;
                if (depth > a) {
                    cout << "NO\n";
                    break;
                }
            } else {
                depth += y;
                if (depth > a) {
                    cout << "YES\n";
                    break;
                }
            }
            
            littleK_turn = !littleK_turn; 
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
