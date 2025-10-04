#include<bits/stdc++.h>

using namespace std;

int max_final_element(vector<int>&a, int n){
    long long sum = 0;
    for(int num : a){
        sum += num;
    }
    return sum - (n - 1);
}

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

        for(int i=0; i<n; ++i){
            cin >> a[i];
        }
        cout << max_final_element(a, n) << endl;
    }
  return 0;
}