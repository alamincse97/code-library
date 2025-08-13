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
        int n;
        cin >> n;
        string s = "aaa";
        n -= 3;
        int tmp = min(25, n);
        s[2] += tmp;
        n -= tmp;
        tmp = min(25, n);
        s[1] += tmp;
        n -= tmp;
        tmp = min(25, n);
        s[0] += tmp;
        n -= tmp;

        cout << s << endl;
    }

  return 0;
}