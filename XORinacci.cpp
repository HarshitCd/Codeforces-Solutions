#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, n;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        if(n%3==0) cout<<a;
        else if(n%3==1) cout<<b;
        else cout<<(b^a);
        cout<<endl;
    }
    return 0;
}
