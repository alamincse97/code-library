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
    
    int area = a * b;

    int perimeter = 2 * (a + b);

    cout << area << " " << perimeter << endl;


  return 0;
}