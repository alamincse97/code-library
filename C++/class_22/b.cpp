// Problem Link - https://atcoder.jp/contests/abc284/tasks/abc284_b

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    scanf("%d", &t); 

    while(t--){
        int n;
        scanf("%d", &n);

        int arr[n], ans = 0;

        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            ans += arr[i] % 2;
        }
        printf("%d\n", ans);

    }

  return 0;
}