#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>b) swap(a, b);
        if((a+b)%3==0 && a*2>=b) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
