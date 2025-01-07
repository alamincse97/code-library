#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p >> q;
    int ans = p;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        ans = min(ans, q + tmp);
    }
    cout << ans;
}