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

    int temp = n;
    int sum = 0;
    
    while(n > 0){
        int r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    n = temp;

    cout << sum << endl;
    
    if (sum == n){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }


  return 0;
}