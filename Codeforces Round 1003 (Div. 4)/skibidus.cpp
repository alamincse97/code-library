#include<bits/stdc++.h>

using namespace std;

void convertToPlural(string w) {
    string root = w.substr(0, w.size() - 2);
    cout << root + "i" << endl;
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
        string w;
        cin >> w;
        convertToPlural(w);
    }
                                        
  return 0;
}