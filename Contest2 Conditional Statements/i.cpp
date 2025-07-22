#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n, a;
    cin >> n >> a;
    
    int c = n % 500;

    if(c <= a) cout << "Yes\n";
    else cout << "No\n";

  return 0;
}