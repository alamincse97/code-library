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
    
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i<n; i++){
            cin >> a[i];
        }
        int cost = INT_MAX;

        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(i == j) continue;

                int cost1 = a[i];
                int cost2 = a[j];

                if(j == i + 1)
                 cost2 /= 2;
                 int total_cost = cost1 + cost2;
                 cost = min(cost, total_cost);
            }
        }
        cout << cost << endl;
    }


  return 0;
}