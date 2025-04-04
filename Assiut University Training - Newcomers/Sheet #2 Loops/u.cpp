#include<bits/stdc++.h>

using namespace std;

int sumOfDigits(int num){
    int sum = 0;
    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n, a, b;
    cin >> n >> a >> b;

    int totalSum = 0;
    
    for(int i=1; i<=n; i++){
        int digitSum = sumOfDigits(i);
        if(digitSum >= a && digitSum <= b){
            totalSum += i;
        }
    }
    cout << totalSum << endl;

  return 0;
}