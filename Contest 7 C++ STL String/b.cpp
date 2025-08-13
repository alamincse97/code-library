#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    string a, b;
    cin >> a >> b;
    
    int n = a.size();

    for(int i=0; i<n; i++){
        a[i] = tolower(a[i]);
    }
    for(int i=0; i<n; i++){
        b[i] = tolower(b[i]);
    }
    if(a == b)cout << 0;
    else if(a < b)cout << -1;
    else cout << 1;

  return 0;
}