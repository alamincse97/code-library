#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    
    if(s == "act"){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


  return 0;
}