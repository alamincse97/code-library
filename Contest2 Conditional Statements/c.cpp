#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n, y;
    cin >> n >> y;
    
    int diff = abs(y - n);

    if((y > n && diff <= 2) || (y < n && diff <= 3)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

  return 0;
}