#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int x, y;
    
    while(true){
        cin >> x >> y;

        if(x == 0 && y == 0) break;

        if(x < y){
            cout << x << " " << y << endl;
        }
        else{
            cout << y << " " << x << endl;
        }
    }

  return 0;
}