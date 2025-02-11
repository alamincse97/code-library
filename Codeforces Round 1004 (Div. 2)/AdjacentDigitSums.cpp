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

        int diff = x + 1 - y;

        if(diff >= 0 && diff % 9 == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

  return 0;
}