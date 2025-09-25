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

        vector<long long> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long b = LLONG_MIN;

        for(int i=0; i<n; i+=2){
            long long diff = abs(a[i] - a[i+1]);
            b = max(b, diff);
        }
        cout << b << endl;
    }

  return 0;
}