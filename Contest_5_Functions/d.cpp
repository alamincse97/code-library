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

    bool found = false;

    while(n--){
        string s;
        cin >> s;

        if(s == "and" || s == "not" || s == "that" || s == "the" || s == "you"){
            found = true;
        }
    }
    if(found){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

  return 0;
}