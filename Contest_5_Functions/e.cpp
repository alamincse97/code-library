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

    sort(a, a+n);
    int ans = 1;

    for(int i=1; i<n; i++){
        ans += (a[i] != a[i-1]);
    }
    printf("%d\n", ans);

  return 0;
}