#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
                                        
    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        set<int> s(v.begin(), v.end());

        s.erase(-1);
        if(s.size() <= 1 && !s.count(0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

  return 0;
}