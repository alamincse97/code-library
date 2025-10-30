#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    int t;
    cin >> t;

    while(t--)
    {
        long long r, x, d;
        int n;
        cin >> r >> x >> d >> n;

        string s;
        cin >> s;

        int ans = 0;

        for(char c : s)
        {
            if(c == '1')
            {
                ans++;
                r = max(0LL, r - d);
            } else {
                if(r < x){
                    ans++;
                    r = max(0LL, r - d);
                }
            }
        }
        cout << ans << endl;
    }

  return 0;
}