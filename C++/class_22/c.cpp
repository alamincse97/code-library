// https://atcoder.jp/contests/abc235/tasks/abc235_b

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

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int ans = a[0];

    for(int i=0; i<n-1; i++){
        if(a[i] < a[i+1]) ans = a[i+1];
        else break;
    }
    printf("%d\n", ans);


  return 0;
}