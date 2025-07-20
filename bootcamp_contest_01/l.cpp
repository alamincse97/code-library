#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int a, b;
    cin >> a >> b;
    
    int ab = pow(a, b);
    int ba = pow(b, a);

    cout << ab + ba << endl;


  return 0;
}