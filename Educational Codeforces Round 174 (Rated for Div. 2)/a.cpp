#include<bits/stdc++.h>

using namespace std;

bool canArray(int n, const vector<int> &b){
    if(n == 3){
        return true;
    }
    for(int i=0; i<b.size()-2; i++){
        if(i+2 < b.size() &&b[i] == 1 && b[i+1] == 0 && b[i+2] == 1){
            return false;
        }
    }
    return true;
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
        int n;
        cin >> n;

        vector<int> b(n-2);
        for(int i=0; i<n-2; i++){
            cin >> b[i];
        }
        cout << (canArray(n, b) ?"YES\n": "NO\n");
    }

  return 0;
}