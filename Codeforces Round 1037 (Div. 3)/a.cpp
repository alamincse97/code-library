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
        string s;
        cin >> s;

        bool f[10] = {};

        for(char c:s) f[c - '0'] = 1;

        for(int d=0; d<10; d++){
            if(f[d]){
                cout << d << endl;
                break;
            }
        }
    }
  return 0;
}