#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
        for(int i=0; i<n; ++i){
            if(a[i] <= 10){
                cout << "A[" << i << "] = " << a[i] << endl;
            }
        }

  return 0;
}