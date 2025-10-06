// Problem Link: https://codeforces.com/problemset/problem/71/A

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

    while(t--)
    {
      string n;
      cin >> n;

      int len = n.length();

      if(len <= 10)
      {
        cout << n << endl;
      } else {
        cout << n[0] << len - 2 << n[len-1] << endl;
      }
    }

  return 0;
}