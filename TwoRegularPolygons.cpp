#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a, b;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;
        if(a%b==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
