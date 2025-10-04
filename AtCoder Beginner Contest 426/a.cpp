// Problem Link: https://atcoder.jp/contests/abc426/tasks/abc426_a

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    string x, y;
    cin >> x >> y;

    map<string, int> os = {
        {"Ocelot", 1},
        {"Serval", 2},
        {"Lynx", 3}
    };

    if(os[x] >= os[y]){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

  return 0;
}