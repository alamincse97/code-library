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
    
    for(int i=n; i>=0; --i){
        for(int j=0; j<i; j++){
            cout << '*';
        }
        cout << endl;
    }
  return 0;
}