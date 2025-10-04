// Problem Link: https://codeforces.com/problemset/problem/4/A

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int w;
    cin >> w;
    
    if(w % 2 == 0 && w > 2){
        cout << "YES" << endl;
    }else {
        cout << "NO" << endl;
    }


  return 0;
}