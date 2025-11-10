#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool flag = false;

        for(int i=1; i<n; i++)
        {
            if(a[i] == a[i-1])
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
          cout << "YES" << endl; 
        }
        else
        {
            cout << "NO" << endl;
        }
    }

  return 0;
}