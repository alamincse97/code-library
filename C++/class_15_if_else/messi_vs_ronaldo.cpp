#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    
    int messi = (2 * a) + b;
    int ronaldo = (2 * x) + y;

    if(messi > ronaldo){
        cout << "Messi" << endl;
    }
    else if(messi < ronaldo){
        cout << "Ronaldo" << endl;
    }
    else{
        cout << "Equal" << endl;
    }


  return 0;
}