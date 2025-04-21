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

        vector<int > a(n);
        set<int> unique_elements;

        for(int i = 0; i < n; ++i){
            cin >> a[i];
            unique_elements.insert(a[i]);
        }
        cout << unique_elements.size() << "\n";
    }

  return 0;
}