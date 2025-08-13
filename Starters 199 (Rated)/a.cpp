#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long long a, b;
    if(!(cin >> a >> b)) return 0;
    
    long long result = a * b - min(a, b);

    cout << result << endl;


  return 0;
}