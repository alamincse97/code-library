#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    
    long long tt;
    cin >> tt;

    while(tt--)
    {
        long long n;
        cin >> n;

        set<int> st;

        long long arr[n+10], max1 = 0;

        for(int i=1; i<=n; i++)
        {
          long long x;
          cin >> x;
          st.insert(x);
          arr[i] = x;
          max1 = max(max1, arr[i]);
        }
        if(st.size() == 1)
        {
          cout << "NO" << endl;
        }
        else 
        {
          cout << "YES" << endl;

          for(int i=1; i<=n; i++)
          {
            if(arr[i] == max1)
            {
              cout << 1 << " ";
            }
            else 
            {
              cout << 2 << " ";
            }
          }
          cout << endl;
        }
    }
  return 0;
}