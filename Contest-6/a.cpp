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
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    reverse(arr.begin(), arr.end());

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

  return 0;
}