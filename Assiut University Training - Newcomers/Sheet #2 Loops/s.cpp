#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin >> t;
    
    while(t--){
        int x, y, sum = 0;
        cin >> x >> y;

        if(x > y){
            int temp = x;
            x = y;
            y = temp;
        }
        for(int i=x+1; i<y; i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
        cout << sum << endl;
    }

  return 0;
}