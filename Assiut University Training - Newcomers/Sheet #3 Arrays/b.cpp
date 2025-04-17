#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int X;
    cin >> X;

    // Search for X in the array
    for (int i = 0; i < N; ++i) {
        if (A[i] == X) {
            cout << i << endl; // Found, print index
            return 0;
        }
    }

    // If not found
    cout << -1 << endl;
    return 0;
}
