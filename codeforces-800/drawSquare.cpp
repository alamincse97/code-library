#include<bits/stdc++.h>

using namespace std;

bool is_square(int l, int r, int d, int u){
    if(l != r || d != u) return false;
    return (l == d);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    int t;
    cin >> t;

    while(t--){
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        cout << (is_square(l, r, d, u) ? "YES" : "NO") << endl;
    }
  return 0;
}