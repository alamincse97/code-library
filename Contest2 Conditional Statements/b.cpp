#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a < b && b < c){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

  return 0;
}