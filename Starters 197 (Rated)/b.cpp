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
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int count = 0;

        for(int i=0; i<n; i++){
            if(a[i] >= x && a[i] <= y){
                count++;
            }
        }
        cout << count << endl;
    }

  return 0;
}