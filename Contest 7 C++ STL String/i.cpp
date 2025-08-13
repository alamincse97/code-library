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
    while(t--){
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;

        int u = 0, d = 0, l = 0, r = 0;

        for(auto c:s){
            if(c == 'U')u++;
            if(c == 'D')d++;
            if(c == 'L')l++;
            if(c == 'R')r++;
        }
        int ans = 1;
        if(x > 0){
           if(r < x) ans = 0; 
        }
        else{
            x = -x;
            if(l < x)ans = 0;
        }
        if(y > 0){
            if(u < y) ans = 0;
        }
        else{
            y = -y;
            if(d < y) ans = 0;
        }
        if(ans)cout << "YES" << endl;
        else cout << "NO" << endl;
    }                                    

  return 0;
}