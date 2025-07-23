#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int a, b;
    cin >> a >> b;
    
    if(b >= a * 3){
        cout << "Rain" << endl;
    }
    else{
        cout << "Dry" << endl;
    }

  return 0;
}