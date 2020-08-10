#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, n, ans=0;
    cin>>a>>b>>c>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a>b && a<c) ans++;
    }
    cout<<ans;
    return 0;
}
