#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    
    int bones = n * x;
    int blood = m * y;

    cout << bones + blood << endl;


  return 0;
}