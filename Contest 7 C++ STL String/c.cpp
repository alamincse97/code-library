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
     while(t--)
     {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for(int i=0; i<n; i++){
            s[i]=tolower(s[i]);
        }
        string new_s;
        new_s += s[0];
        for(int i=1; i<n; i++){
            if(s[i] != s[i-1]){
                new_s += s[i];
            }
        }
        if(new_s == "meow") cout << "YES" << endl;
        else cout << "NO" << endl;
     }                                   


  return 0;
}