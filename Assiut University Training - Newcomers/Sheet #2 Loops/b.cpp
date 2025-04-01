#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n, t;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        if(i % 2 == 0)
        {
            cout << i << endl;
            t++;
        }
    }
    if(t == 0)
    {
        cout << "-1" << endl;
    }

  return 0;
}