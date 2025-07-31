#include<bits/stdc++.h>

using namespace std;

int max(int arr[], int n){
    int mx = 0; 
    for(int i=1; i<n; i++){
        if(mx < arr[i]) mx = arr[i];
    }
    return mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n, i;
    scanf("%d", &n);

    int p[n];
    for(i=0; i<n; i++){
        scanf("%d", &p[i]);
    }

    int tmp = max(p, n);
    int ans = tmp+1 - p[0];
    if(ans < 0) ans = 0;

    printf("%d\n", ans);
  return 0;
}