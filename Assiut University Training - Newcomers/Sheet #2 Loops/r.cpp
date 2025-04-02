#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    while(1)
    {
        int m, n, sum = 0;
        cin >> m >> n;

        if (m <= 0 || n <= 0){
            break;
        }
        else if (m < n){
            for(int i=m; i<=n; i++)
            {
                sum = sum + i;
                cout << " " << i; 
            }
            cout << " sum =" << sum;
            cout << endl;
        }
        else {
            for(int i=n; i<=m; i++){
                sum = sum + i;
                cout << " " << i;
            }
            cout << " sum =" << sum;
            cout << endl;
        }
    }
  return 0;
}