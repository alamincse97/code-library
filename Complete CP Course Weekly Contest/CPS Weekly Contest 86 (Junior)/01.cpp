// Problem Link: https://www.codechef.com/problems/CPRIVAL?tab=statement
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    int r1, r2;
    int d1, d2;

    cin >> r1 >> r2;
    cin >> d1 >> d2;

    int dominates = r1 - d1;
    int everntes = r2 - d2;

    if(dominates > everntes)
        cout << "Everule\n";
    else 
        cout << "Dominater\n";

  return 0;
}