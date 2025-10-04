#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void CASES()
{
    ll n;
    cin >> n;
 
    ll ans = 1ll * 3 * (n / 15) + min(3 * 1ll, (n % 15) + 1);
    cout << ans << '\n';
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        CASES();
    }
    return 0;
}