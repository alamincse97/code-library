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

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];

        int max = a[0];
        int ans = 0;

        for(int j=1; j<n; j++)
        {
            if(a[j] < max) ans++;
            else max = a[j];
        }
        cout << ans << endl;
    }
  return 0;
}