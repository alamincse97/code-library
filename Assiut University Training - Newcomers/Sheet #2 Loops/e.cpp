#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    long long n, num;
    cin >> n;

    cin >> num;
    long long max = num;

    for(int i=1; i<n; i++){
        cin >> num;
        if(num > max){
            max = num;
        }
    }
    cout << max << endl;

  return 0;
}