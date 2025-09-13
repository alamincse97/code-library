// Problem Link: https://atcoder.jp/contests/abc236/tasks/abc236_b

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n;
    scanf("%d", &n);
    
    int arr[4*n-1];

    for(int i=0; i<4*n-1; i++){
        scanf("%d", &arr[i]);
    }

    int F[n+1];
    for(int i=1; i<=n; i++){
        F[i] = 0;
    }

    for(int i=0; i<4*n-1; i++){
        F[arr[i]]++;
    }

    int ans;

    for(int i=1; i<=n; i++){
        if(F[i] == 3){
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

  return 0;
}