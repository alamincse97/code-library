#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {

    optimize();
    int t;
    cin >> t;  
    while (t--) {

        int n, a, b;
        cin >> n >> a >> b;  
        
        if (a > b) {
            swap(a, b);
        }

        if ((b - a) % 2 == 1) {
            printf("NO\n");  
        } else {
            printf("YES\n");
        }
    }
    return 0;
}
