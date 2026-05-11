// Problem Link: https://www.codechef.com/problems/CPRIVAL?tab=statement

#include <iostream>
using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int r1, r2;
    int d1, d2;

    // Read initial ratings and the rating changes
    cin >> r1 >> r2;
    cin >> d1 >> d2;

    // Calculate final ratings by adding the changes
    int final_dominater = r1 + d1;
    int final_everule = r2 + d2;

    // Compare and print the winner
    if (final_dominater > final_everule) {
        cout << "Dominater" << endl;
    } else {
        cout << "Everule" << endl;
    }

    return 0;
}