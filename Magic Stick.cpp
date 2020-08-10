#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x, y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x>=y) cout<<"YES\n";
        else{
            if(x==1 || x==3) cout<<"NO\n";
            else if(x==2 && y==3) cout<<"YES\n";
            else if(x==2) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}
