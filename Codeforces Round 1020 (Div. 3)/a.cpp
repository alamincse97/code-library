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
        string s;

        cin >> n;
        cin >> s;

        int count_1 = 0;

        for(char ch : s){
            if(ch == '1') count_1++;
        }

        int count_0 = n - count_1;

        int total_ones = (n - 1) * count_1 + count_0;

        cout << total_ones << endl;
    }


  return 0;
}