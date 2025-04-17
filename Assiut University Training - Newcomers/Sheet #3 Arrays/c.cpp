#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin >> t;

    int a[t];
    
    for(int i=0; i<t; i++){
        cin >> a[i];
    }

    for(int i=0; i<t; i++){
        if(a[i] > 0)
            a[i] = 1;
        else if(a[i] < 0)
            a[i] = 2;
    }

    for(int i=0; i<t; i++){
        cout << a[i] << " ";
    }
    cout << endl;

  return 0;
}