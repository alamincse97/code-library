#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int a, b, c;
    cin >> a >> b >> c;
    
    int profit = b + c;

    int result = a - profit;

    cout << result << endl;


  return 0;
}