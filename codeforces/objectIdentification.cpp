#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second

long long t,n,m,i,j,k,l,a[201010],b[201010],x,y,z;

int main(){
    cin>>t;
    while(t--){
        cin>>n;x=0;
        for(i=1;i<=n;i++) b[i]=0;
        for(i=1;i<=n;i++){cin>>l;a[i]=l; b[l]++;if(b[l]==2) x=i;if(l==1) y=i;if(l==n) z=i;}
        if(x==0){
            cout<<"? "<<y<<" "<<z<<endl;
            cin>>k;
            if(k>=n) cout<<"! B"<<endl;
            else if(k<n-1) cout<<"! A"<<endl;
            else{
                cout<<"? "<<z<<" "<<y<<endl;
                cin>>k;
                if(k>=n-1) cout<<"! B"<<endl;
                else cout<<"! A"<<endl;
            }
        }
        else{
            for(i=1;i<=n;i++) if(b[i]==0){x=i;break;}
            if(x!=1) cout<<"? "<<x<<" 1"<<endl;
            else cout<<"? 1 2"<<endl;
            cin>>k;
            if(k==0) cout<<"! A"<<endl;
            else cout<<"! B"<<endl;
        }
    }
}