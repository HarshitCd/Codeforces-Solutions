#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    if(n<=2) cout<<"No";
    else{
        int s = n*(n+1)/2;
        for(i=2; i<=n; i++){ if(s%i==0) break;}
        if(i>n) cout<<"No";
        else{
            cout<<"Yes\n";
            cout<<1<<" "<<i<<endl;
            cout<<n-1<<" ";
            for(int j=1; j<=n; j++){
                if(i==j) continue;
                cout<<j<<" ";
            }
        }
    }
}
