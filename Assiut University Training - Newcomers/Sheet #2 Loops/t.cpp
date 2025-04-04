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

    for(int i=1; i<=n; i++){

        // printing spaces
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }
            for(int j=1; j<=(2*i-1); j++){
                cout << "*";
            }
            cout << endl;
        }
  return 0;
}