#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */

    int even = 0, odd = 0, pos = 0, neg = 0;
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        if(n % 2 == 0){
            even++;
        }
        if(n % 2 != 0){
            odd++;
        }
        if(n > 0){
            pos++;
        }
        if(n < 0 ){
            neg++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;


  return 0;
}