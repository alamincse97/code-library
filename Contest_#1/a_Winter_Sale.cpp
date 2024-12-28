#include<bits/stdc++.h>

using namespace std;

int main(){
    double x, p;
    cin >> x >> p;

    // calculate the original price

    double originalPrice = p / (1 - x / 100.0);

    // Output the result

    cout << fixed << setprecision(2) << originalPrice << endl;

    return 0;
}