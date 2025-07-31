#include<bits/stdc++.h>

using namespace std;

int max_three_numbers(int x, int y, int z)
{
    int number1 = x + y;
    int number2 = y + z;
    int number3 = z + x;

    int max_number = max({number1, number2, number3});

    return max_number;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int a, b, c;
    cin >> a >> b >> c;
    
    cout << max_three_numbers(a, b, c) << endl;

  return 0;
}