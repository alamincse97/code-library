// Problem Link: https://atcoder.jp/contests/abc436/tasks/abc436_a
// Creator : Md. Al - Amin

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n;
    string s;
    
    cin >> n;
    cin >> s;

    int len = n - s.length();

    for(int i = 0; i < len; i++)
        cout << 'o';
    
    cout << s << endl;

  return 0;
}