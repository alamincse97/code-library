#include<bits/stdc++.h>

using namespace std;

#define pi 3.141592653589793

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    double r;
    cin >> r;

    double area = pi * r * r;

    double circumastance = 2 * pi * r;

    cout << fixed << setprecision(6) << area << " " << circumastance << endl;


  return 0;
}