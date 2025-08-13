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

        int n = s.size();
        int flag = 0;

        for(int i=1; i<n/2; i++){
            if(s[i] != s[i-1])flag=1;
        }
        if(flag)cout << "YES" << endl;
        else cout << "NO" << endl;
    }                                   


  return 0;
}