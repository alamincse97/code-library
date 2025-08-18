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
    
    if(a > b ){
        // b, a
        if(c < b){
            // c b a
            cout << c << " " << b << " " << a << endl;
        }
        else {
            if(c < a){
                // b c a 
                cout << b << " " << c << " " << a << endl;
            }
            else{
                
                cout << b << " " << a << " " << c << endl;
            }
        }
    }
    else{
        // a b
        if(c < a){
            cout << c << " " << a << " " << b << endl;
        }
        else{
            if(c < b){
                // a c b
                cout << a << " " << c << " " << b << endl;
            }
            else{
                // a b c 
                cout << a << " " << b << " " << c << endl;
            }
        }
    }


  return 0;
}