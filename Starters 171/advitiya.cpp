#include<bits/stdc++.h>

using namespace std;

int minStepsToCorrect(string s){
    string target = "ADVITIYA";
    int totalSteps = 0;

    for(int i=0; i<8; i++){
        char current = s[i];
        char targetChar = target[i];
        int steps = (targetChar - current + 26) % 26;
        totalSteps += steps;
    } 
    return totalSteps;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;
        cout << minStepsToCorrect(s) << endl;
    }                                    
    return 0;
}