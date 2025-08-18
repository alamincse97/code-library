#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n, t, a;
    cin >> n >> t >> a;
    
    int b = n - (t + a);

    if(t > a + b || t + b < a){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

  return 0;
}