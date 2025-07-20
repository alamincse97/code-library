#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    long long a, b;
    cin >> a >> b;

    long long attacks = (a + b - 1) / b;

    cout << attacks << endl;

  return 0;
}