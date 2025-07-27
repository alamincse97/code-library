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

        int count = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];

            if(a[i] % 2 == 1){
                count++;
            }
        }
        cout << count << "\n";
    }

  return 0;
}