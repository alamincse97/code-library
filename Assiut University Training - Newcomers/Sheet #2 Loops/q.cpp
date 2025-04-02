#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long long int t;
    cin >> t;
    
    while(t--){
        long long int n;
        cin >> n;

        if(n == 0){
            cout << "0\n";
            continue;
        }

        while(n > 0){
            long long int rem = n % 10;
            cout << rem << " ";
            n = n / 10;
        }
        cout << endl;
    }

  return 0;
}