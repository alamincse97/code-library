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
        long long x, y;
        cin >> x >> y;

        if(y > x){
            cout << 2 << endl;
        }
        else if(y >= 2 && x - y >= 2){
            cout << 3 << endl; 
        }
        else {
            cout << -1 << endl;
        }
    }

  return 0;
}