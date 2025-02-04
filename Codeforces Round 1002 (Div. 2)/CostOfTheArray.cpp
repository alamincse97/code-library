#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    k /= 2;

    vector<int> a(n);

    for(auto &it: a) cin >> it;
    if(2 * k == n){
        for(int i=1; i<n; i+=2){
            if(a[i] != (i+1) / 2){
                cout << (i + 1) / 2 << '\n';
                return;
            }
        }
        cout << k + 1 << '\n';
    }else{
        for(int i=1; i<=n - 2 * k + 1; i++){
            if(a[i] != 1){
                cout << "1\n";
                return;
            }
        }
        cout << "2\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */

    int T = 1; 
    cin >> T;
    while(T--){
        solve();
    }                                 
}