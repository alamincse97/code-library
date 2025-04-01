#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n == 1)
        return false;

    for(int i=2; i<n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); */

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(isPrime(i)){
            cout << i << " "; 
        }
    }
    return 0;
}
