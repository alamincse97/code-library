#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &x:a)
        cin>>x;
        vector<int> cnt(n+1,0);
        for(auto x:a)cnt[x]++;
        int best=0, L=0, R=-1, start=-1;
        for(int i=0;i<n;i++){
            if(cnt[a[i]]==1){
                if(start==-1)start=i;
                int len=i-start+1; 
                if(len>best){best=len; 
                L=start; 
                R=i;
            }
        } 
        else start=-1;
    } 
    if(best==0) cout<<"0\n"; 
        else cout<<L+1<<" "<<R+1<<"\n";
    } 
    return 0;
}