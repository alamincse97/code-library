#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
     int x, count = 0;
     cin >> x;
     
     for(int i=2; i<x; i++){
        if(x % i == 0){
            count++;
            break;
        }
     }
     if(count == 0){
        cout << "YES" << endl;
     }
     else {
        cout << "NO" << endl;
     }
  return 0;
}