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
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        for(int j=0; j<x; j++){
            cout << s << endl;
        }
    }

  return 0;
}