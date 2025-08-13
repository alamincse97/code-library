#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    string s;
    cin >> s;
    
    int i, n=s.size(), ok=1;
    while(ok){
        ok = 0; 
        n = s.size();

        for(i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                ok = 1;
                s.erase(i, 2);
                break;
            }
        }
    }
    if(s == "")s = "Empty String";
    cout << s << endl;


  return 0;
}