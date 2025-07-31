#include<bits/stdc++.h>

using namespace std;

int a[105];
int n;

int max_index(){
    int mxi = 0; 
    for(int i=1; i<n; i++){
        if(a[i] > a[mxi]) mxi = i;
    }
    return mxi;
}

int min_index(){
    int mni = 0; 
    for(int i=1; i<n; i++){
        if(a[i] <= a[mni]) mni = i;
    }
   return mni; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int mxi = max_index();
    int mni = min_index();
    int ans = mxi + (n - mni - 1);

    if(mxi > mni) ans--;
    printf("%d\n", ans);

  return 0;
}