#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n;
    cin >> n;
    
    for(int i=1; i<=12; i++){
        cout << n << " " << "*" << " " << i << " " << "=" << " " << n * i << endl;
    }
  return 0;
}