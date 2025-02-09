#include <iostream>
#include <string>
using namespace std;

int solve(string s) {
    // If length <= 1, no operations possible
    if (s.length() <= 1) return s.length();
    
    // Count how many times we can perform the operation
    int operations = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            operations++;
            // Skip the next character as it will be removed
            i++;
        }
    }
    
    // For remaining characters that don't form pairs
    // We can make them equal to their neighbors by changing one character
    // This allows for additional operations
    int remaining = s.length() - 2 * operations;
    if (remaining >= 2) {
        // We can make adjacent characters equal and perform more operations
        // Each operation reduces length by 1
        operations += (remaining - 1);
    }
    
    // Final length is original length minus number of operations
    // (each operation removes one character)
    return s.length() - operations;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    
    return 0;
}