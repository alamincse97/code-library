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
        vector<int> a(n), b;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        b = a;
        sort(b.begin(), b.end());
        int mx = b[n-1], mx2 = b[n-2];

        for(int i=0; i<n; i++){
            if(a[i] == mx){
                cout << a[i] - mx2 << " ";
            }
            else{
                 cout << a[i] - mx << " ";
            }
        }
        cout << "\n";
    }


  return 0;
}