#include<bits/stdc++.h>

using namespace std;

int order_of_permutation(int a[], int n){
    int perm[n];
    for(int i=0; i<n; i++){
        perm[i] = i+1;
    }
    int ans = 1;

    do{
        int flag = 1;
        for(int i=0; i<n; i++){
            if(a[i] != perm[i])flag=0;
        }
        if(flag) return ans;
        ans++;

    }while(next_permutation(perm, perm+n));
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
                                        
    int n;
    cin >> n;
    int P[n], Q[n];
    for(int i=0; i<n; i++){
        cin >> P[i];
    }
    for(int i=0; i<n; i++){
        cin >> Q[i];
    }
    int a = order_of_permutation(P, n);
    int b = order_of_permutation(Q, n);
    printf("%d\n", abs(a-b));

  return 0;
}