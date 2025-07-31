#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    char a[205];
    scanf("%s", a);
    int n = strlen(a);
    int i, j;
    char tmp[105];
    for(i = 0, j = 0; i<n; i+=2, j++){
        tmp[j] = a[i];
    }
    n = j;
    sort(tmp, tmp + n);
    printf("%c", tmp[0]);
    for(i = 1; i < n; i++){
        printf("+%c", tmp[i]);
    }                         

  return 0;
}