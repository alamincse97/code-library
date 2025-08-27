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
        int a, b;
        cin >> a >> b;

        int maxSyrap = min(a, b/2);
        int totaljuice = 3 * maxSyrap;
        cout << totaljuice << endl;
    }

  return 0;
}