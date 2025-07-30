#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int x;
    cin >> x;
    
    if(x > 15){
        cout << "-1" << endl;
    } 
    else{
        cout << 15 - x << endl;
    }

  return 0;
}