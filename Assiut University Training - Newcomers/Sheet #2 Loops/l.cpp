#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << endl;

  return 0;
}