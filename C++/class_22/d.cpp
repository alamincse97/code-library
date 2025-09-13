// Problem Link: https://atcoder.jp/contests/abc307/tasks/abc307_a

// #include<bits/stdc++.h>

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// /*  freopen(input.txt, 'r', stdin);
//     freopen(output.txt, 'w', stdout); */
//     int n;
//     cin >> n;

//     int ans = 0;
    
//     for(int w=1; w<=n; w++){
//         for(int d=1; d<=7; d++){
//             int arr[d];
//             scanf("%d", &arr[d]);
//             ans += arr[d];
//         }
//          printf("%d", ans);
//     }

//   return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int n;
    scanf("%d", &n);
    
    int arr[n*7+1 ], ans = 0;

    for(int i=1; i<=n*7; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<=n*7; i++){
        ans += arr[i];

        if(i % 7 == 0){
            printf("%d ", ans);
            ans = 0;
        }
    }
    printf("\n");


  return 0;
}