#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    char s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    int ans = 0;

    if(s1 == '1') ans++;
    if(s2 == '1') ans++;
    if(s3 == '1') ans++;

    cout << ans << endl;

  return 0;
}