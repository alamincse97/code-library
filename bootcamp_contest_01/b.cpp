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
    
    int division = a / b;
    int remainder = a % b;
    double fraction = (double) a / b;

    cout << division << " " << remainder << " " << fixed << setprecision(5) << fraction << endl;


  return 0;
}