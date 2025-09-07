#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int i, j;
    char s;
    
    cin >> i >> s >> j;

    if(j < 8){
        cout << i << "-" << j + 1 << endl;
    } else{
        cout << i + 1 << "-1" << endl;
    }


  return 0;
}