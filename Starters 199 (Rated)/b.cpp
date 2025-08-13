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
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int pos = 1;
        int maxSize = arr[0];

        for(int i = 1; i < n; i++) {
            if(arr[i] > maxSize) {
                maxSize = arr[i];
                pos = i + 1; 
            }
        }
        cout << pos << endl;
    }


  return 0;
}