#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    char s;
    int n;
    cin >> s >> n;

    while(n--){
        int x;
        cin >> x;

        for(int i=0; i<x; i++){
            cout << s;
        }
        cout << endl;
    }

  return 0;
}