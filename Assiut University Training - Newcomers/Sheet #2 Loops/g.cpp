#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */

    long long r = 1, t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        for(int i=1; i<=n; i++){
            r = r * i;
        }
        cout << r << endl;
        r = 1;
    }
  return 0;
}