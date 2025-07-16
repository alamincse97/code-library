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

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        bool lost = false;
        int sum = 0; 

        for(int i=0; i<n; i++){
            sum += arr[i];
            double average = static_cast<double>(sum) / (i + 1);

            if(average < 40.0){
                lost = true;
                break;
            }
        }

        if(lost){
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

  return 0;
}