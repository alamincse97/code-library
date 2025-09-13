// Problem Link : https://cses.fi/problemset/task/1083

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
    
    int arr[n-1], f[n+1]={};

    for(int i=0; i<n-1; i++){
        scanf("%d", &arr[i]);
        f[arr[i]]++;
    }

    int ans;

    for(int i=1; i<=n; i++){
        if(f[i] == 0){
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);

  return 0;
}