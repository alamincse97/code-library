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

    int result = n | 1;

    result = result & (~2);
    result = result ^ (1 << 2);
    
    printf("%d\n", result);


  return 0;
}