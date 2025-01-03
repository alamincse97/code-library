#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s;

    int q;
    cin >> q;

    while(q--){
        int y, x;
        cin >> y >> x;

        if(y == 1) s.insert(x);
        else if(y == 2) s.erase(x);
        else{
            if(s.count(x) == 1) cout << "Yes\n";
            else cout << "No\n";
        }
    }
}