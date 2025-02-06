#include<bits/stdc++.h>

using namespace std;

void solution(){
    long long n;
    cin >> n;

    long long sum = 0; 
    for(long long i=1; i<=n/2; i++){
        sum += (i*i*8);
    }
    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin >> t;

    while(t--){
        solution();
    }                                    
  return 0;
}