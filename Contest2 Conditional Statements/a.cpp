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
    
    if(a < b){
        cout << "a < b" << endl;
    }
    else if (a > b){
        cout << "a > b" << endl;
    }
    else if (a == b){
        cout << "a == b" << endl;
    }


  return 0;
}