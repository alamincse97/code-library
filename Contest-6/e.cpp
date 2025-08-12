#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n;
    cin >> n;
    vector<int> cnt(n+1);
    int ans = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x > n){
            ans++;
        }
        else{
            cnt[x]++;
        }
    }                
    for(int i=1; i<=n; i++){
        if(cnt[i] >= i)ans+=cnt[i] - i;
        else ans += cnt[i];
    }  
    cout << ans << endl;                  

  return 0;
}