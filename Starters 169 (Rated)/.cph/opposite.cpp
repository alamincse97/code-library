#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */

    int T;
    cin >> T;

    for(int i=1; i<=T; i++){
        string a = "";
        int N;
        string S;

        cin >> N;
        cin >> S;

        for(int j=0; j<S.length(); j++){
            
            if(S[j] == '0'){
                a = a + '1';
            }
            else {
                a = a + '0';
            }
        }
    cout << a << '\n';    
}
                                    
  return 0;
}