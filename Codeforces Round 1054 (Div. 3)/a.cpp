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
        int n; 
        cin >> n;

        vector<int> a(n);

        int z = 0, ne = 0; 

        for(int i=0; i<n; i++){
            cin >> a[i];

            if(a[i] == 0) z++;
            if(a[i] == -1) ne++;
        }

        int ans = z;
        if(ne % 2 == 1) ans += 2;

        cout << ans << endl;
    }

  return 0;
}