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
        int n = 8;
        char ans = 'B';
        while(n--){
            vector<char> tmp(8);
            int cnt = 0;
            for(int i=0; i<8; i++){
                cin >> tmp[i];
                cnt += (tmp[i] == 'R');
            }
            if(cnt == 8)ans = 'R';
        }
        cout << ans << endl;
    }


  return 0;
}