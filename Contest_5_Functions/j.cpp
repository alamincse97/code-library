#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    char s[105];
    scanf("%s", s);
    
    int n = strlen(s);
    for(int i=0; i<n; i+= 2){
        char tmp = s[i];
        s[i] = s[i+1];
        s[i+1] = tmp;
    }
    printf("%s\n", s);

  return 0;
}