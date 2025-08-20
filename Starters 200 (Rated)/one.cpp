#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n, x, y;
    cin >> n >> x >> y;
    
    int cakes_per_vehicle = y / x;

    int vehicles = (n + cakes_per_vehicle - 1) / cakes_per_vehicle;

    cout << vehicles << endl;

  return 0;
}