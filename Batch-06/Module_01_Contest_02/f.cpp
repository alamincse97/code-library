#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int w, h;
    cin >> w >> h;
    
    if(60 <= w && 130 >= h)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

  return 0;
}