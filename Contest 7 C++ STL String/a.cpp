#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n;
    cin >> n;
    
    vector<string> s;
    for(int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
    }

    reverse(s.begin(), s.end());
    for(int i=0; i<n; i++){
        cout << s[i] << endl;
    }

  return 0;
}