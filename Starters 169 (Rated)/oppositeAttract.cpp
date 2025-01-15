#include<bits/stdc++.h>

using namespace std;


string generateOppositeString(const string& s){
    string t=s;
    for(char& ch : t){
        ch = (ch == '0') ? '1' : '0';
    }
    return t;
}

int main()
{
    int t;
    cin >> t;

    vector<string> results;
    results.reserve(t);

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        results.push_back(generateOppositeString(s));
    }
    for(const string& result : results){
        cout << result << endl;
    }
    return 0;
}