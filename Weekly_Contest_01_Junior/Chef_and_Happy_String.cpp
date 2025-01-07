// problem Link: https://www.codechef.com/practice/course/strings/STRINGS/problems/HAPPYSTR?tab=statement

#include<bits/stdc++.h>

using namespace std;


int main()
{
    set<char>st {'a', 'e', 'i', 'o', 'u'};

    int t, i;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        for(i=0; i<s.size() - 2; i++){
            if(st.find(s[i]) != st.end() && st.find(s[i+1]) != st.end() && st.find(s[i+2]) != st.end())
            {
                cout << "Happy\n";
                break;
            }
        }
        if(i == s.size() - 2){
            cout << "Sad\n";
        }

    }
}